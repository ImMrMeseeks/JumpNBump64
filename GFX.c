#include "globals.h"

//int pal[] =
//{ 1,35,1089,1123,34817,34851,35329,35939,16913,16947,18001,18035,51729,51763,52817,52851,
//1,2115,6343,10571,12685,16913,21141,23255,27483,31711,35939,38053,42281,46509,48623,52851,
//51,12339,26675,38963,51251,51239,51227,51213,51201,51585,52033,52417,52801,40513,28225,13889,
//1601,1613,1627,1639,1651,1267,883,435,27507,31603,39795,45939,52083,52077,52071,52063,
//52059,52187,52443,52635,52827,46683,40539,32347,28251,28255,28263,28269,28275,28083,27891,27635,
//38067,42163,46259,48307,52403,52399,52397,52393,52389,52517,52645,52709,52837,48741,46693,42597,
//38501,38505,38509,38511,38515,38387,38323,38195,23,4119,10263,16407,22551,22545,22539,22533,
//22529,22657,22849,23041,23233,17089,10945,4801,705,709,715,721,727,535,343,151,
//10583,12631,16727,18775,22871,22867,22865,22861,22859,22923,23051,23115,23243,19147,17099,13003,
//10955,10957,10961,10963,10967,10839,10775,10647,16919,16919,18967,21015,23063,23061,23059,23057,
//23057,23057,23121,23185,23249,21201,19153,17105,17105,17105,17107,17109,17111,17047,16983,16919,
//13,2061,6157,8205,12301,12297,12295,12291,12289,12353,12481,12545,12673,8577,6529,2433,
//385,387,391,393,397,269,205,77,6349,8397,8397,10445,12493,12491,12489,12489,
//12487,12551,12551,12615,12679,10631,8583,8583,6535,6537,6537,6539,6541,6477,6413,6413,
//8461,8461,10509,12557,12557,12557,12555,12553,12553,12553,12617,12681,12681,12681,10633,8585,
//8585,8585,8587,8589,8589,8589,8525,8461,1,1,1,1,1,1,1,1 };


char pal[] = {
	0x00, 0x00, 0x00,
	0x00, 0x00, 0x0B,
	0x00, 0x00, 0x13,
	0x00, 0x00, 0x1B,
	0x00, 0x00, 0x23,
	0x00, 0x00, 0x2B,
	0x00, 0x00, 0x33,
	0x00, 0x00, 0x3B,
	0x00, 0x00, 0x43,
	0x00, 0x00, 0x4B,
	0x00, 0x00, 0x53, 
	0x00, 0x00, 0x5B, 
	0x00, 0x00, 0x63, 
	0x00, 0x00, 0x6B, 
	0x00, 0x00, 0x73, 
	0x00, 0x00, 0x7B, 
	0xFF, 0xFF, 0xFF, 
	0xEB, 0xEB, 0xEB, 
	0xDB, 0xDB, 0xDB, 
	0xCB, 0xCB, 0xCB,
	0xBB, 0xBB, 0xBB, 
	0xA7, 0xA7, 0xA7, 
	0x97, 0x97, 0x97, 
	0x87, 0x87, 0x87, 
	0x77, 0x77, 0x77, 
	0x63, 0x63, 0x63, 
	0x53, 0x53, 0x53, 
	0x43, 0x43, 0x43, 
	0x33, 0x33, 0x33, 
	0x1F, 0x1F, 0x1F, 
	0x0F, 0x0F, 0x0F, 
	0x00, 0x00, 0x00, 
	0xFF, 0xFF, 0xFF, 
	0xD3, 0xE7, 0xF7, 
	0xAB, 0xCF, 0xF3, 
	0x87, 0xBB, 0xEB, 
	0x5F, 0xA7, 0xE7, 
	0x3F, 0x93, 0xDF, 
	0x1B, 0x7F, 0xDB, 
	0x00, 0x6F, 0xD7, 
	0x00, 0x5F, 0xBB, 
	0x00, 0x53, 0x9F, 
	0x00, 0x43, 0x83,
	0x00, 0x37, 0x6B, 
	0x00, 0x27, 0x4F, 
	0x00, 0x1B, 0x33, 
	0x00, 0x0B, 0x1B, 
	0x00, 0x00, 0x00, 
	0xE7, 0xFF, 0xA7, 
	0xCF, 0xEB, 0x87, 
	0xBB, 0xDB, 0x6B, 
	0xA7, 0xCB, 0x53, 
	0x93, 0xBB, 0x3B, 
	0x7F, 0xAB, 0x27, 
	0x6F, 0x9B, 0x17, 
	0x5F, 0x8B, 0x07, 
	0x4F, 0x7B, 0x00, 
	0x43, 0x67, 0x00, 
	0x37, 0x57, 0x00, 
	0x2B, 0x43, 0x00, 
	0x1F, 0x33, 0x00, 
	0x13, 0x23, 0x00, 
	0x0B, 0x0F, 0x00, 
	0x00, 0x00, 0x00, 
	0xFF, 0xE7, 0xB7, 
	0xF7, 0xD7, 0x97, 
	0xEF, 0xC3, 0x77, 
	0xE7, 0xB3, 0x5F, 
	0xDF, 0xA3, 0x43, 
	0xD7, 0x97, 0x2B, 
	0xCF, 0x83, 0x13, 
	0xBB, 0x6B, 0x0B, 
	0xA7, 0x53, 0x07, 
	0x93, 0x3F, 0x07, 
	0x7F, 0x2F, 0x00, 
	0x6B, 0x1F, 0x00, 
	0x57, 0x13, 0x00, 
	0x37, 0x0B, 0x00, 
	0x1B, 0x07, 0x00, 
	0x00, 0x00, 0x00, 
	0xFF, 0xF3, 0xDB, 
	0xF7, 0xDF, 0x9F, 
	0xF3, 0xD3, 0x67, 
	0xEF, 0xCF, 0x33, 
	0xEB, 0xC7, 0x00, 
	0xD7, 0xB3, 0x00, 
	0xC3, 0x97, 0x00, 
	0xAF, 0x7F, 0x00, 
	0x9B, 0x6B, 0x00, 
	0x87, 0x53, 0x00, 
	0x73, 0x43, 0x00, 
	0x5B, 0x37, 0x00, 
	0x43, 0x27, 0x00, 
	0x2B, 0x1B, 0x00, 
	0x17, 0x0B, 0x00, 
	0x00, 0x00, 0x00, 
	0x0B, 0x77, 0xD7, 
	0x2B, 0x87, 0xDB, 
	0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x33, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xBB, 0x00, 0xFF, 0x83, 0x00, 0xFF, 0x00, 0x00, 0xCB, 0x00, 0x00, 0x97, 0x00, 0x00, 0x63, 0x00, 0x00, 0x33, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0x9B, 0x9B, 0xFF, 0x5B, 0x5B, 0xBF, 0x43, 0x43, 0x7F, 0x2B, 0x2B, 0x3F, 0x13, 0x13, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xA3, 0xD3, 0xF7, 0x4F, 0xAB, 0xF3, 0x00, 0x87, 0xEF, 0x0B, 0x7F, 0xBB, 0x0F, 0x6B, 0x87, 0x0F, 0x4B, 0x53, 0x07, 0x1F, 0x1F, 0xFF, 0xFF, 0x33, 0xF3, 0xCF, 0x33, 0xEB, 0xA3, 0x33, 0xE3, 0x7B, 0x37, 0xFF, 0x63, 0x63, 0xE3, 0x47, 0x43, 0xCB, 0x1F, 0x1B, 0xB3, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xDB, 0x00, 0x00, 0xB7, 0x00, 0x00, 0x93, 0x00, 0x00, 0x73, 0x00, 0x00, 0x4F, 0x00, 0x00, 0x2B, 0x00, 0x00, 0x0B, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 0xDB, 0xDB, 0xB3, 0xB3, 0xB3, 0x8F, 0x8F, 0x8F, 0x6B, 0x6B, 0x6B, 0x47, 0x47, 0x47, 0x23, 0x23, 0x23, 0x00, 0x00, 0x00, 0xFF, 0xF3, 0xD7, 0xDF, 0xBF, 0x8B, 0xBF, 0x8F, 0x4F, 0x9F, 0x63, 0x23, 0x77, 0x47, 0x17, 0x4F, 0x2F, 0x0F, 0x27, 0x17, 0x07, 0x00, 0x00, 0x00, 0xA7, 0xA7, 0xA7, 0x8F, 0x8F, 0x8F, 0x77, 0x77, 0x77, 0x5F, 0x5F, 0x5F, 0x47, 0x47, 0x47, 0x2F, 0x2F, 0x2F, 0x17, 0x17, 0x17, 0x00, 0x00, 0x00, 0xD7, 0xAB, 0x8B, 0xB7, 0x8F, 0x77, 0x97, 0x77, 0x63, 0x7B, 0x5F, 0x4F, 0x5B, 0x47, 0x3B, 0x3B, 0x2F, 0x27, 0x1F, 0x17, 0x13, 0x00, 0x00, 0x00, 0xFF, 0x73, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

void drawpixel(int x, int y, unsigned char colour) {
	//int ypix = (colour >> 8);
	//int actcolour;
	//actcolour = pal[ypix * 16 + (colour - ypix)];
	
	if (x >= 0 && x < 320 && y >= 0 && y < 240) {
		//graphics_draw_pixel(_dc, x, y, graphics_make_color(palR[colour], palG[colour], palB[colour], 0xFF));
		graphics_draw_pixel(_dc, x, y, graphics_make_color(pal[(colour*3)], pal[(colour*3) + 1], pal[(colour*3) + 2], 0xFF));
		//graphics_draw_pixel(_dc, x, y, pal3[(int)colour]);
		//__set_pixel(buffer, x, y, pal2[(int)colour]);
	}
}

void open_screen(void) {
	//__dpmi_regs regs;
 // char *ptr1;

	//regs.x.ax = 0x13;
 // __dpmi_int(0x10, &regs);

 //	outportw(0x3c4, 0x0604);
 //	outportw(0x3c4, 0x0100);
	//outportb(0x3c2, 0xe7);
	//outportw(0x3c4, 0x0300);

	//outportb(0x3d4, 0x11);
 // outportb(0x3d5, inportb(0x3d5) & 0x7f);

 //	outportw(0x3d4, 0x7100);
 //	outportw(0x3d4, 0x6301);
	//outportw(0x3d4, 0x6402);
 // outportw(0x3d4, 0x9203);
	//outportw(0x3d4, 0x6604);
	//outportw(0x3d4, 0x8205);
	//outportw(0x3d4, 0x2b06);
	//outportw(0x3d4, 0xb207);
 // outportw(0x3d4, 0x0008);
 //	outportw(0x3d4, 0x6109);
 //	outportw(0x3d4, 0x1310);
 //	outportw(0x3d4, 0xac11);
 //	outportw(0x3d4, 0xff12);
 //	outportw(0x3d4, 0x3213);
 //	outportw(0x3d4, 0x0014);
 //	outportw(0x3d4, 0x0715);
 //	outportw(0x3d4, 0x1a16);
 //	outportw(0x3d4, 0xe317);

	//outportw(0x3d4, 0x3213);

 // ptr1 = (char *)(0xa0000 + __djgpp_conventional_base);
	//outportw(0x3c4, 0x0f02);
 // memset(ptr1, 0, 65535);

}


void wait_vrt(void) {

 	//while( (inportb(0x3da) & 8) == 0);
  //while( (inportb(0x3da) & 8) == 8);

}


void get_block(char page, short x, short y, short width, short height, char *buffer) {
	//short c1, c2, c3;
	//char *buffer_ptr, *vga_ptr;
	//vga_ptr = 0;

	//for (c3 = 0; c3 < 4; c3++) {
	//	//outportw(0x3ce, ( ( (x + c3) & 3) << 8) + 0x04);
	//	for (c1 = 0; (c1 + c3) < width; c1 += 4) {
	//		buffer_ptr = &buffer[(c1 + c3) * height];
	//		//vga_ptr = (char *)(0xa0000 + ( (long)page << 15) + (long)y * 100 + ( (x + c1 + c3) >> 2) + __djgpp_conventional_base);
	//		for (c2 = 0; c2 < height; c2++) {
	//			*buffer_ptr = *vga_ptr;
	//			buffer_ptr++;
	//			vga_ptr += 100;
	//		}
	//	}
	//}

}


void put_block(char page, short x, short y, short width, short height, sprite_t *buffer) {
	//READS image BUFFER INFO AND STORES IN VGA pointer(frame buffer) 

	//short c1, c2, c3;
	//char *vga_ptr, *buffer_ptr;

	//for (c3 = 0; c3 < 4; c3++) {
	//	//outportw(0x3c4, ( (1 << ( (x + c3) & 3) ) << 8) + 0x02);
	//	for (c1 = 0; (c1 + c3) < width; c1 += 4) {
	//		vga_ptr = (char *)(0xa0000 + ( (long)page << 15) + (long)y * 100 + ( (x + c1 + c3) >> 2) );/*+ __djgpp_conventional_base)*/
	//		buffer_ptr = &buffer[(c1 + c3) * height];
	//		for (c2 = 0; c2 < height; c2++) {
	//			*vga_ptr = *buffer_ptr;
	//			vga_ptr += 100;
	//			buffer_ptr++;
	//		}
	//	}
	//}

	int i, j;
	//uint32_t texloc = 0;
	//uint32_t tmem = 0;
	char spritenum = 0;

	rdp_sync(SYNC_PIPE);

	for (j = 0; j < 8; j++) {

		for (i = 0; i < 5; i++) {

			rdp_load_texture(BackSpr[(int)spritenum]);

			rdp_draw_sprite(i * 64, j * 32, 0);

			spritenum++;
		}

	}
	rdp_sync(SYNC_FULL);
}


void put_text(char page, int x, int y, char *text, char align) {
	int c1;
	int t1;
	int width;
	int cur_x;
	int image;

	//initialize
	cur_x = 0;

	if (text == NULL || strlen(text) == 0)
		return;
	if (font_gobs == NULL)
		return;

	width = 0;
	c1 = 0;
	while (text[c1] != 0) {
		t1 = text[c1];
		c1++;
		if (t1 == ' ') {
			width += 5;
			continue;
		}
		if (t1 >= 33 && t1 <= 34)
			image = t1 - 33;
		else if (t1 >= 39 && t1 <= 41)
			image = t1 - 37;
		else if (t1 >= 44 && t1 <= 59)
			image = t1 - 39;
		else if (t1 >= 64 && t1 <= 90)
			image = t1 - 43;
		else if (t1 >= 97 && t1 <= 122)
			image = t1 - 49;
		else if (t1 == '~')
			image = 74;
		else if (t1 == '„')
			image = 75;
		else if (t1 == '†')
			image = 76;
		else if (t1 == 'Ž')
			image = 77;
		else if (t1 == '')
			image = 78;
		else if (t1 == '”')
			image = 79;
		else if (t1 == '™')
			image = 80;
		else
			continue;
		width += pob_width(image, font_gobs) + 1;
	}

	switch (align) {
		case 0:
			cur_x = x;
			break;
		case 1:
			cur_x = x - width;
			break;
		case 2:
			cur_x = x - width / 2;
			break;
	}
	c1 = 0;
	while (text[c1] != 0) {
		t1 = text[c1];
		c1++;
		if (t1 == ' ') {
			cur_x += 5;
			continue;
		}
		if (t1 >= 33 && t1 <= 34)
			image = t1 - 33;
		else if (t1 >= 39 && t1 <= 41)
			image = t1 - 37;
		else if (t1 >= 44 && t1 <= 59)
			image = t1 - 39;
		else if (t1 >= 64 && t1 <= 90)
			image = t1 - 43;
		else if (t1 >= 97 && t1 <= 122)
			image = t1 - 49;
		else if (t1 == '~')
			image = 74;
		else if (t1 == '„')
			image = 75;
		else if (t1 == '†')
			image = 76;
		else if (t1 == 'Ž')
			image = 77;
		else if (t1 == '')
			image = 78;
		else if (t1 == '”')
			image = 79;
		else if (t1 == '™')
			image = 80;
		else
			continue;
		put_pob(page, cur_x, y, image, font_gobs, 1, mask_pic); //crashes on this
		cur_x += pob_width(image, font_gobs) + 1;
	}

}


void put_pob(char page, short x, short y, short image, char *pob_data, char mask, char *mask_pic) {
	long c1, c2, c3;
	short pob_offset; //long
	char *pob_ptr;//,  *mask_ptr; /**vga_ptr,*/
	short width, height; //long
	short draw_width, draw_height;	//long
	char colour;
	//char dirText[100];
	colour = 0;


  short SCREEN_WIDTH = 320;
  short SCREEN_HEIGHT = 240;

	c1 = c2 = c3 = 1;
	//if (image < 0 || image >= *(short *)(pob_data) )
		//return;

	pob_offset = (short)(((unsigned char)*(pob_data + (image * 4) + 3) << 8) | ((unsigned char)*(pob_data + (image * 4) + 2))); //pob_data + (image * 4) + 2

	width = draw_width = (short)(((unsigned char)*(pob_data + pob_offset + 1) << 8)|(unsigned char)*(pob_data + pob_offset));
	height = draw_height = (short)(((unsigned char)*(pob_data + pob_offset + 3) << 8) | (unsigned char)*(pob_data + pob_offset + 2));
	x -= (short)(((unsigned char)*(pob_data + pob_offset + 5) << 8) | (unsigned char)*(pob_data + pob_offset + 4));	//*(short *)(pob_data + pob_offset + 4);
	y -= (short)(((unsigned char)*(pob_data + pob_offset + 7) << 8) | (unsigned char)*(pob_data + pob_offset + 6));	//*(short *)(pob_data + pob_offset + 6);

	//debug
	//sprintf(dirText, "pob_offset: %i, %i, %i, %i", (int)((short )*(pob_data + (image * 4))), (int)((short)*(pob_data + (image * 4) + 1)), (int)((short)*(pob_data + (image * 4) + 2)), (int)((short)*(pob_data + (image * 4) + 3)) );
	//graphics_draw_text(_dc, 5, 8, dirText);
	//sprintf(dirText, "image: %i, %i", (int)(image), (int)(image*4));
	//graphics_draw_text(_dc, 5, 16, dirText);
	//sprintf(dirText, "width: %d", (width));
	//graphics_draw_text(_dc, 5, 24, dirText);
	//sprintf(dirText, "height: %d", (height));
	//graphics_draw_text(_dc, 5, 32, dirText);
	//sprintf(dirText, "x: %i", (x));
	//graphics_draw_text(_dc, 5, 40, dirText);
	//sprintf(dirText, "y: %i", (y));
	//graphics_draw_text(_dc, 5, 48, dirText);

	pob_offset += 8;

	//boundary check, see if pob is on screen
	if ((x + width) <= 0 || x >= SCREEN_WIDTH) { //400
		return;
	}
	if ((y + height) <= 0 || y >= SCREEN_HEIGHT) { //256
		return;
	}

  if (x < 0) {
    pob_offset -= x;
    draw_width += x;
    x = 0;
  }
  //clipping
  if ((x + width) > SCREEN_WIDTH) {//400
	  draw_width -= x + width - SCREEN_WIDTH; //400
  }
  if (y < 0) {
    pob_offset += -y * width;
    draw_height -= -y;
    y = 0;
  }

  if ((y + height) > SCREEN_HEIGHT) { //256
	  draw_height -= y + height - SCREEN_HEIGHT; //256
  }

	//for (c3 = 0; c3 < 4; c3++) {
		c3 = 0;
		//outportw(0x3c4, ( (1 << ( (x + c3) & 3) ) << 8) + 0x02);
		pob_ptr = (pob_data + pob_offset + c3); //&pob_data[pob_offset + c3];
		//vga_ptr = (char *)(0xa0000 + (long)(page << 15) + (long)y * 100l + ( (x + c3) >> 2) + __djgpp_conventional_base);
		//mask_ptr = (char *)(mask_pic + (long)y * 400l + x + c3);

		//draw loop
		for (c1 = 0; c1 < draw_height; c1++) {
			for (c2 = c3; c2 < draw_width; c2++) { //c2 += 4) {
      			//colour = *mask_ptr;
				//if (mask == 0 || (mask == 1 && colour == 0) ) {
					colour = *pob_ptr;
					if (colour != 0) {
						drawpixel(x + c2, y + c1, colour);
						//*vga_ptr = colour;
					}
				//}
				pob_ptr++; //pob_ptr += 4;
				//vga_ptr++;
				//mask_ptr += 4;
			}
		 //pob_ptr += width - c2 + c3;
		 //vga_ptr += (400 - c2 + c3) >> 2;
		 //mask_ptr += 400 - c2 + c3;
		}
	//}

}

void put_pob2(char page, short x, short y, short image, uint32_t* pob_data, char mask, char* mask_pic) {
	long c1, c2, c3;
	short pob_offset; //long
	//char *pob_ptr;//,  *mask_ptr; /**vga_ptr,*/
	long width, height;
	long draw_width, draw_height;
	char colour;
	char dirText[100];
	colour = 0;


	//short SCREEN_WIDTH = 320;
	//short SCREEN_HEIGHT = 240;

	c1 = c2 = c3 = 1;
	//if (image < 0 || image >= *(short *)(pob_data) )
		//return;

	pob_offset = (short)((unsigned char)(*(pob_data - 2 + (image))) << 8 | (unsigned char)(*(pob_data - 2 + (image)) >> 8)); //pob_data + image * 4 + 2

	width = draw_width = (short)(*(pob_data + pob_offset/4 - 2) >> 16);
	height = draw_height = (short)(*(pob_data + pob_offset/4 - 2));
	x -= (short)(*(pob_data + pob_offset/4 - 1) >> 16);
	y -= (short)(*(pob_data + pob_offset/4 - 1));

	//debug
	//sprintf(dirText, "pob_offset: %i, %i, %i, %i", (int)((short)*(pob_data + (image * 4))), (int)((short)*(pob_data + (image * 4) + 1)), (int)((short)*(pob_data + (image * 4) + 2)), (int)((short)*(pob_data + (image * 4) + 3)));
	sprintf(dirText, "pob_offset: %i, %i, %i", (int)pob_offset, (short)((unsigned char)(*(pob_data - 2 + (image))) << 8), (short)((unsigned)(*(pob_data - 2 + (image)) >> 8)));
	graphics_draw_text(_dc, 5, 8, dirText);
	sprintf(dirText, "image: %i, %i", (int)(image), (int)(image * 4));
	graphics_draw_text(_dc, 5, 16, dirText);
	sprintf(dirText, "width: %ld", (width));
	graphics_draw_text(_dc, 5, 24, dirText);
	sprintf(dirText, "height: %ld", (height));
	graphics_draw_text(_dc, 5, 32, dirText);

	pob_offset += 8;

	//boundary check
 // if ( (x + width) <= 0 || x >= SCREEN_WIDTH) //400
 //   return;
 // if ( (y + height) <= 0 || y >= SCREEN_HEIGHT) //256
 //   return;
 // if (x < 0) {
 //   pob_offset -= x;
 //   draw_width += x;
 //   x = 0;
 // }
 // //clipping
 // if ( (x + width) > SCREEN_WIDTH) //400
 //   draw_width -= x + width - SCREEN_WIDTH; //400
 // if (y < 0) {
 //   pob_offset += -y * width;
 //   draw_height -= -y;
 //   y = 0;
 // }

 // if ( (y + height) > SCREEN_HEIGHT) //256
 //   draw_height -= y + height - SCREEN_HEIGHT; //256

	//for (c3 = 0; c3 < 4; c3++) {
	//	//outportw(0x3c4, ( (1 << ( (x + c3) & 3) ) << 8) + 0x02);
	//	pob_ptr = (pob_data + pob_offset + c3); //&pob_data[pob_offset + c3];
	//	//vga_ptr = (char *)(0xa0000 + (long)(page << 15) + (long)y * 100l + ( (x + c3) >> 2) + __djgpp_conventional_base);
	//	//mask_ptr = (char *)(mask_pic + (long)y * 400l + x + c3);

	//	//draw loop
	//	for (c1 = 0; c1 < draw_height; c1++) {
	//		for (c2 = c3; c2 < draw_width; c2 += 4) {
 //     	//colour = *mask_ptr;
 //       //if (mask == 0 || (mask == 1 && colour == 0) ) {
	//				colour = *pob_ptr;
	//				if (colour != 0) {
	//					drawpixel(x + c2, y + c1, colour);
	//					//*vga_ptr = colour;
	//				}
 //       //}
	//				pob_ptr++; //+= 4;
	//			//vga_ptr++;
	//			//mask_ptr += 4;
	//		}
	//	 pob_ptr += width - c2 + c3;
	//	 //vga_ptr += (400 - c2 + c3) >> 2;
	//	 //mask_ptr += 400 - c2 + c3;
	//	}
	//}

}


char pob_col(short x1, short y1, short image1, char *pob_data1, short x2, short y2, short image2, char *pob_data2) {
	//short c1, c2;
	//long pob_offset1, pob_offset2;
	//short width1, width2;
	//short height1, height2;
 // short check_width, check_height;
	//char *pob_ptr1, *pob_ptr2;

	//pob_offset1 = *(long *)(pob_data1 + image1 * 4 + 2);
	//width1 = *(short *)(pob_data1 + pob_offset1);
	//height1 = *(short *)(pob_data1 + pob_offset1 + 2);
	//x1 -= *(short *)(pob_data1 + pob_offset1 + 4);
	//y1 -= *(short *)(pob_data1 + pob_offset1 + 6);
	//pob_offset1 += 8;

	//pob_offset2 = *(long *)(pob_data2 + image2 * 4 + 2);
	//width2 = *(short *)(pob_data2 + pob_offset2);
	//height2 = *(short *)(pob_data2 + pob_offset2 + 2);
	//x2 -= *(short *)(pob_data2 + pob_offset2 + 4);
	//y2 -= *(short *)(pob_data2 + pob_offset2 + 6);
	//pob_offset2 += 8;

 // if (x1 < x2) {
 // 	if ( (x1 + width1) <= x2)
	//		return 0;
 //   else if ( (x1 + width1) <= (x2 + width2) ) {
 //   	pob_offset1 += x2 - x1;
 //   	check_width = x1 + width1 - x2;
 //   }
 //   else {
 //   	pob_offset1 += x2 - x1;
 //     check_width = width2;
 //   }
 // }
 // else {
 // 	if ( (x2 + width2) <= x1)
	//		return 0;
 //   else if ( (x2 + width2) <= (x1 + width1) ) {
 //   	pob_offset2 += x1 - x2;
 //   	check_width = x2 + width2 - x1;
 //   }
 //   else {
 //   	pob_offset2 += x1 - x2;
 //     check_width = width1;
 //   }
 // }
 // if (y1 < y2) {
 // 	if ( (y1 + height1) <= y2)
	//		return 0;
 //   else if ( (y1 + height1) <= (y2 + height2) ) {
 //   	pob_offset1 += (y2 - y1) * width1;
 //   	check_height = y1 + height1 - y2;
 //   }
 //   else {
 //   	pob_offset1 += (y2 - y1) * width1;
 //     check_height = height2;
 //   }
 // }
 // else {
 // 	if ( (y2 + height2) <= y1)
	//		return 0;
 //   else if ( (y2 + height2) <= (y1 + height1) ) {
 //   	pob_offset2 += (y1 - y2) * width2;
 //   	check_height = y2 + height2 - y1;
 //   }
 //   else {
 //   	pob_offset2 += (y1 - y2) * width2;
 //     check_height = height1;
 //   }
 // }

 // pob_ptr1 = (char *)(pob_data1 + pob_offset1);
 // pob_ptr2 = (char *)(pob_data2 + pob_offset2);
 // for (c1 = 0; c1 < check_height; c1++) {
	//  for (c2 = 0; c2 < check_width; c2++) {
 //   	if (*pob_ptr1 != 0 && *pob_ptr2 != 0)
 //     	return 1;
 //     pob_ptr1++;
 //     pob_ptr2++;
 // 	}
 //   pob_ptr1 += width1 - check_width;
 //   pob_ptr2 += width2 - check_width;
 // }

  return 0;

}


short pob_width(short image, char *pob_data) {
	short pob_offset;
	short width;

	pob_offset = (short)(((unsigned char)*(pob_data + (image * 4) + 3) << 8) | ((unsigned char)*(pob_data + (image * 4) + 2))); //pob_data + (image * 4) + 2
	width = (short)(((unsigned char)*(pob_data + pob_offset + 1) << 8) | (unsigned char)*(pob_data + pob_offset));
	return width;

	//pob_width(main_info.page_info[(int)page].pobs[c1].image, main_info.page_info[(int)page].pobs[c1].pob_data)
	//return *(short *)(pob_data + *(long *)(pob_data + image * 4 + 2) );
}


short pob_height(short image, char *pob_data) {
	short pob_offset;
	short height;

	pob_offset = (short)((*(pob_data + (image * 4) + 3) << 8) | (*(pob_data + (image * 4) + 2))); //pob_data + (image * 4) + 2
	height = (short)((*(pob_data + pob_offset + 1) << 8) | *(pob_data + pob_offset));
	return height;
	//return *(short *)(pob_data + *(long *)(pob_data + image * 4 + 2) + 2);
}


short pob_hs_x(short image, char *pob_data) {
	return *(short *)(pob_data + *(long *)(pob_data + image * 4 + 2) + 4);
}


short pob_hs_y(short image, char *pob_data) {
	return *(short *)(pob_data + *(long *)(pob_data + image * 4 + 2) + 6);
}


char read_pcx(int handle, sprite_t *buffer, long buf_len, char *pal) {	/*(FILE * handle, char* buffer, long buf_len, char* pal)*/
	
	//Opens images

	//short c1;
	//short a, b;
	//long ofs1;
	//if (buffer != 0) {
	//	fseek(handle, 128, SEEK_CUR);
	//	ofs1 = 0;
	//	while (ofs1 < buf_len) {
	//		a = fgetc(handle);
	//		if ( (a & 0xc0) == 0xc0) {
	//			b = fgetc(handle);
	//			a &= 0x3f;
	//			for (c1 = 0; c1 < a; c1++)
	//				buffer[ofs1++] = b;
	//		}
	//		else
	//			buffer[ofs1++] = a;
	//	}
	//	if (pal != 0) {
	//		fseek(handle, 1, SEEK_CUR);
	//		for (c1 = 0; c1 < 768; c1++)
	//			pal[c1] = fgetc(handle) >> 2;
	//	}
	//}
	//fclose(handle);

	if (buffer != 0) {
		free(buffer);
	}

	buffer = malloc(dfs_size(handle));
	dfs_read(buffer, 1, dfs_size(handle), handle);
	dfs_close(handle);

	return 0;
}

void GOBStatistics(int Offset) {
	//access file->data to access each nibble of a file
	//char dirText[100];

	//Data is a stream of byte starting at 0x08
	//sprintf(dirText, "Handle: %i", GHandle);
	//graphics_draw_text(_dc, 5, 5, dirText);
	//sprintf(dirText, "DFS Size(handle): %i", dfs_size(GHandle));
	//graphics_draw_text(_dc, 5, 12, dirText);
	//sprintf(dirText, "GOB Rabbit: %i, %i, %i, %i", (int)((char)(GobRabbit->data[Offset] >> 24)), (int)((char)(GobRabbit->data[Offset]>>16)), (int)((char)(GobRabbit->data[Offset]>>8)), (int)((char)(GobRabbit->data[Offset]))); //(int)(*(SprLevel))
	//graphics_draw_text(_dc, 5, 20, dirText);
	//sprintf(dirText, "GOB Rabbit: %c, %c, %c, %c", ((char)(GobRabbit->data[Offset] >>24)), ((char)(GobRabbit->data[Offset] >> 16)), ((char)(GobRabbit->data[Offset] >> 8)), ((char)(GobRabbit->data[Offset]))); //(int)(*(SprLevel))
	//graphics_draw_text(_dc, 5, 28, dirText);
	//sprintf(dirText, "Offset: %i, %c ", Offset, (char)(Offset)); //(int)(*(SprLevel))
	//graphics_draw_text(_dc, 5, 36, dirText);
	//sprintf(dirText, "rabbit_gobs: %i, %i, %i, %i", (int)((char)(*(rabbit_gobs + Offset))), (int)((char)(*(rabbit_gobs + Offset + 1))), (int)((char)*(rabbit_gobs + Offset + 2)), (int)((char)(*(rabbit_gobs + Offset + 3)))); //(int)(*(SprLevel))
	//graphics_draw_text(_dc, 5, 44, dirText);
	//sprintf(dirText, "rabbit_gobs: %c, %c, %c, %c", ((char)*(rabbit_gobs + Offset)), ((char)*(rabbit_gobs + Offset + 1)), ((char)*(rabbit_gobs + Offset + 2)), ((char)*(rabbit_gobs + Offset + 3))); //(int)(*(SprLevel))
	//graphics_draw_text(_dc, 5, 52, dirText);
}
