#include <stdio.h>
#include <stdlib.h>
//#include "audio.h"

#include "GLOBALS.H"
#include <libdragon.h>
#include <mikmod.h>


//audio

int fp;
pcm_sound_t* sfx[SFX_NUM_SOUNDS];
SAMPLE *sfx1 = NULL;
SAMPLE* sfx2 = NULL;
SAMPLE* sfx3 = NULL;
SAMPLE* sfx4 = NULL;
SAMPLE* sfx5 = NULL;

void dj_ready_mod(int i) {
	MODULE* module = NULL;

	switch (i) {
	case 0:
		module = Player_Load("rom://jump.mod", 4, 0);
		module->wrap = 1;
		break;
	case 1:
		module = Player_Load("rom://bump.mod", 4, 0);
		module->wrap = 1;
		break;
	case 2:
		module = Player_Load("rom://scores.mod", 4, 0);
		module->wrap = 0;
		break;
	default:
		break;
	}

	if (module) {
		audio_write_silence();
		Player_Start(module);
	}
}

void dj_play_sfx(int i) {

	//if (sample) Sample_Free(sample);

	switch (i) {
	case 0:
		if(sfx1) 
			Sample_Play(sfx1, 0, 0);
		break;
	case 1:
		//sfx1 = Sample_LoadRaw("rom://land.smp" , SFX_LAND_FREQ, 1, 4);
		break;
	case 2:
		if (sfx2) 
			Sample_Play(sfx2, 0, 0);
		break;
	case 3:
		if (sfx3) 
			Sample_Play(sfx3, 0, 0);
		break;
	case 4:
		if (sfx4) 
			Sample_Play(sfx4, 0, 0);
		break;
	case 5:
		if (sfx5) 
			Sample_Play(sfx5, 0, 0);
		break;
	default:
		break;
	}
}


void dj_load_sfx(char* file, int i) {
	char path[20] = "rom://";
	strcpy(path + 6, file);
	switch (i) {
	case 0:
		if (!sfx1) sfx1 = Sample_LoadRaw(path, SFX_JUMP_FREQ, 0, 4);
		break;
	case 1:
		//sfx1 = Sample_LoadRaw(path , SFX_LAND_FREQ, 1, 4);
		break;
	case 2:
		if (!sfx2) sfx2 = Sample_LoadRaw(path, SFX_DEATH_FREQ, 0, 4);

		break;
	case 3:
		if (!sfx3) sfx3 = Sample_LoadRaw(path, SFX_SPRING_FREQ, 0, 4);
		break;
	case 4:
		if (!sfx4) sfx4 = Sample_LoadRaw(path, SFX_SPLASH_FREQ, 0, 4);
		break;
	case 5:
		if (!sfx5) sfx5 = Sample_LoadRaw(path, SFX_FLY_FREQ, 0, 0x0104); //0x0104
		break;
	default:
		break;
	}
}

//NOT MIKMOD
void read_dfs_pcm_sound(signed char* data, unsigned long size, unsigned short sample_rate, unsigned char soundeffect)
{
	pcm_sound_t* smp = malloc(sizeof(pcm_sound_t));

	unsigned long frames = size / MONO_PCM_SAMPLE_SIZE;

	smp->sample_rate = sample_rate;
	smp->channels = 1;
	smp->frames = frames;
	smp->samples = frames / 1;
	smp->data = (data);

	sfx[soundeffect] = smp;
}

//
audio_t* audio_setup(const unsigned short sample_rate, const unsigned char buffers)
{
	unsigned char i;

	/* Start up the audio subsystem */
	audio_init(sample_rate, buffers);
	/*const*/ unsigned short buffer_length = audio_get_buffer_length();
	signed short* buffer = (short*)malloc(buffer_length * STEREO_PCM_SAMPLE_SIZE); //STEREO_PCM_SAMPLE_SIZE
	audio_t* audio = (audio_t*)malloc(sizeof(audio_t));
	audio->sample_rate = sample_rate;
	audio->frames = buffer_length << 1; //buffer_length << 1;
	audio->buffer = buffer;

	//mikmod
	MikMod_RegisterAllDrivers();
	MikMod_RegisterAllLoaders();
	//md_mode |= DMODE_16BITS;
	md_mode |= DMODE_SOFT_MUSIC;
	md_mode |= DMODE_SOFT_SNDFX;
	md_mixfreq = audio_get_frequency();

	MikMod_Init("");
	MikMod_SetNumVoices(-1, 5);
	MikMod_EnableOutput();

	/* Setup the sound effects channels */
	for (i = 0; i < SFX_NUM_CHANNELS; i++)
	{
		audio->channels[i].cursor = 0;
		audio->channels[i].sfx = NULL;
	}
	return audio;
}

void audio_free(audio_t* audio)
{
	unsigned char i;

	/* Clear the sound effects cache */
	//for (unsigned char i = 0; i < SFX_NUM_SOUNDS; i++)
	//{
	//	free(audio->sfx_cache[i]->data);
	//	free(audio->sfx_cache[i]);
	//	audio->sfx_cache[i] = NULL;
	//}
	/* Clear sound effects pointers from playback channels */
	for (i = 0; i < SFX_NUM_CHANNELS; i++)
	{
		audio->channels[i].sfx = NULL;
	}
	/* Shut down the audio subsystem */
	free(audio->buffer);
	free(audio);
	audio_close();
}

inline static signed short mix_pcm_samples(signed int mix, unsigned char num)
{
	return (num > 1) ? (mix / num) : mix;

}
void audio_tick(audio_t* audio)
{
	unsigned char i;

	MikMod_Update();

	if (audio != NULL && audio_can_write())
	{
		sfx_channel_t channel;
		pcm_sound_t* sfx;
		//unsigned short sfxdata;
		signed int left_mix, right_mix;
		unsigned char left_num, right_num;
		register unsigned short frame;
		/* Fill the audio buffer with stereo sample frames */
	/*unsigned short frame = 0*/
		for (frame = 0; frame < audio->frames; left_mix = left_num = right_mix = right_num = 0)
		{

			/* Accumulate all currently playing sound effects samples */
			for (i = 4; i < SFX_NUM_CHANNELS; i++) //SFX_NUM_CHANNELS
			{
				channel = audio->channels[i];
				sfx = channel.sfx;
				if (sfx != NULL && channel.cursor < sfx->samples)
				{

					left_mix += sfx->data[channel.cursor++] << 2;
					left_num++;
					/* Play mono sound effects in both speakers */
					if (sfx->channels == 1)
					{

						right_mix += sfx->data[channel.cursor - 1] << 8;
						right_num++;
					}
					///* Play stereo sound effects in separate speakers */
					else if (channel.cursor < sfx->samples)
					{

						right_mix += sfx->data[channel.cursor++] << 8;
						right_num++;
					}
					/* Reset channels that have finished playing */
					if (channel.cursor >= sfx->samples)
					{
						channel.cursor = 0;
						channel.sfx = NULL;
					}
				}
				audio->channels[i] = channel;
			}
			/* Mix down all of the samples as an average */
			//if (left_num > 0) 
				audio->buffer[frame++] = mix_pcm_samples(left_mix, left_num);
			//else frame++;
			//if (right_num > 0) 
				audio->buffer[frame++] = mix_pcm_samples(right_mix, right_num);
			//else frame++;
		}
		audio_write(audio->buffer);
		left_mix = right_mix = 0;
	}
}

void audio_play_sfx(audio_t* audio, int sfx_sound)	//const sfx_sounds_t sfx_sound
{
	unsigned char i;

	if (audio != NULL)
	{
		pcm_sound_t* smp = NULL;
		smp = sfx[sfx_sound];
		if (smp != NULL)
		{
			for (i = 0; i < SFX_NUM_CHANNELS; i++)
			{
				if (audio->channels[i].sfx == NULL)
				{
					audio->channels[i].sfx = smp;
					audio->channels[i].cursor = 0;
					break;
				}
			}
		}
	}
}