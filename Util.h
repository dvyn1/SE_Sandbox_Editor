#pragma once


#pragma region Type Definitions
typedef char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;


#pragma endregion 

#pragma region Macros

#pragma region Storage Specifiers
#define global_variable static
#define internal static
#pragma endregion

#pragma region Color Macros
#define		MAROON			0X800000		//(128,0,0)
#define		DARK_RED		0X8B0000		//(139,0,0)
#define		BROWN			0XA52A2A		//(165,42,42)
#define		FIREBRICK		0XB22222		//(178,34,34)
#define		CRIMSON			0XDC143C		//(220,20,60)
#define		RED				0XFF0000		//(255,0,0)
#define		TOMATO			0XFF6347		//(255,99,71)
#define		CORAL			0XFF7F50		//(255, 127, 80)
#define		INDIAN_RED		0XCD5C5C		//(205, 92, 92)
#define		LIGHT_CORAL		0XF08080		//(240, 128, 128)
#define		DARK_SALMON		0XE9967A		//(233, 150, 122)
#define		SALMON			0XFA8072		//(250, 128, 114)
#define		LIGHT_SALMON	0XFFA07A		//(255, 160, 122)
#define		ORANGE_RED		0XFF4500		//(255, 69, 0)
#define		DARK_ORANGE		0XFF8C00		//(255, 140, 0)
#define		ORANGE			0XFFA500		//(255, 165, 0)
#define		GOLD			0XFFD700		//(255, 215, 0)
#define		DARK_GOLDEN_ROD	0XB8860B		//(184, 134, 11)
#define		GOLDEN_ROD		0XDAA520		//(218, 165, 32)
#define		PALE_GOLDEN_ROD	0XEEE8AA		//(238, 232, 170)
#define		DARK_KHAKI		0XBDB76B		//(189, 183, 107)
#define		KHAKI			0XF0E68C		//(240, 230, 140)
#define		OLIVE			0X808000		//(128, 128, 0)
#define		YELLOW			0XFFFF00		//(255, 255, 0)
#define		YELLOW_GREEN	0X9ACD32		//(154, 205, 50)
#define		DARK_OLIVE_GRN	0X556B2F		//(85, 107, 47)
#define		OLIVE_DRAB		0X6B8E23		//(107, 142, 35)
#define		LAWN_GREEN		0X7CFC00		//(124, 252, 0)
#define		CHARTREUSE		0X7FFF00		//(127, 255, 0)
#define		GREEN_YELLOW	0XADFF2F		//(173, 255, 47)
#define		DARK_GREEN		0X006400		//(0, 100, 0)
#define		GREEN			0X008000		//(0, 128, 0)
#define		FOREST_GREEN	0X228B22		//(34, 139, 34)
#define		LIME			0X00FF00		//(0, 255, 0)
#define		LIME_GREEN		0X32CD32		//(50, 205, 50)
#define		LIGHT_GREEN		0X90EE90		//(144, 238, 144)
#define		PALE_GREEN		0X98FB98		//(152, 251, 152)
#define		DARK_SEA_GREEN	0X8FBC8F		//(143, 188, 143)
#define		MED_SPRING_GRN	0X00FA9A		//(0, 250, 154)
#define		SPRING_GREEN	0X00FF7F		//(0, 255, 127)
#define		SEA_GREEN		0X2E8B57		//(46, 139, 87)
#define		MED_AQUA_MARINE	0X66CDAA		//(102, 205, 170)
#define		MED_SEA_GREEN	0X3CB371		//(60, 179, 113)
#define		LIGHT_SEA_GREEN	0X20B2AA		//(32, 178, 170)
#define		DARK_SLATE_GRAY	0X2F4F4F		//(47, 79, 79)
#define		TEAL			0X008080		//(0, 128, 128)
#define		DARK_CYAN		0X008B8B		//(0, 139, 139)
#define		AQUA			0X00FFFF		//(0, 255, 255)
#define		CYAN			0X00FFFF		//(0, 255, 255)
#define		LIGHT_CYAN		0XE0FFFF		//(224, 255, 255)
#define		DARK_TURQUOISE	0X00CED1		//(0, 206, 209)
#define		TURQUOISE		0X40E0D0		//(64, 224, 208)
#define		MED_TURQUOISE	0X48D1CC		//(72, 209, 204)
#define		PALE_TURQUOISE	0XAFEEEE		//(175, 238, 238)
#define		AQUA_MARINE		0X7FFFD4		//(127, 255, 212)
#define		POWDER_BLUE		0XB0E0E6		//(176, 224, 230)
#define		CADET_BLUE		0X5F9EA0		//(95, 158, 160)
#define		STEEL_BLUE		0X4682B4		//(70, 130, 180)
#define		CORNFLOWER_BLUE	0X6495ED		//(100, 149, 237)
#define		DEEP_SKY_BLUE	0X00BFFF		//(0, 191, 255)
#define		DODGER_BLUE		0X1E90FF		//(30, 144, 255)
#define		LIGHT_BLUE		0XADD8E6		//(173, 216, 230)
#define		SKY_BLUE		0X87CEEB		//(135, 206, 235)
#define		LIGHT_SKY_BLUE	0X87CEFA		//(135, 206, 250)
#define		MIDNIGHT_BLUE	0X191970		//(25, 25, 112)
#define		NAVY			0X000080		//(0, 0, 128)
#define		DARK_BLUE		0X00008B		//(0, 0, 139)
#define		MEDIUM_BLUE		0X0000CD		//(0, 0, 205)
#define		BLUE			0X0000FF		//(0, 0, 255)
#define		ROYAL_BLUE		0X4169E1		//(65, 105, 225)
#define		BLUE_VIOLET		0X8A2BE2		//(138, 43, 226)
#define		INDIGO			0X4B0082		//(75, 0, 130)
#define		DARK_SLATE_BLUE	0X483D8B		//(72, 61, 139)
#define		SLATE_BLUE		0X6A5ACD		//(106, 90, 205)
#define		MED_SLATE_BLUE	0X7B68EE		//(123, 104, 238)
#define		MEDIUM_PURPLE	0X9370DB		//(147, 112, 219)
#define		DARK_MAGENTA	0X8B008B		//(139, 0, 139)
#define		DARK_VIOLET		0X9400D3		//(148, 0, 211)
#define		DARK_ORCHID		0X9932CC		//(153, 50, 204)
#define		MEDIUM_ORCHID	0XBA55D3		//(186, 85, 211)
#define		PURPLE			0X800080		//(128, 0, 128)
#define		THISTLE			0XD8BFD8		//(216, 191, 216)
#define		PLUM			0XDDA0DD		//(221, 160, 221)
#define		VIOLET			0XEE82EE		//(238, 130, 238)
#define		MAGENTA			0XFF00FF		//(255, 0, 255)
#define		ORCHID			0XDA70D6		//(218, 112, 214)
#define		MED_VIOLET_RED	0XC71585		//(199, 21, 133)
#define		PALE_VIOLET_RED	0XDB7093		//(219, 112, 147)
#define		DEEP_PINK		0XFF1493		//(255, 20, 147)
#define		HOT_PINK		0XFF69B4		//(255, 105, 180)
#define		LIGHT_PINK		0XFFB6C1		//(255, 182, 193)
#define		PINK			0XFFC0CB		//(255, 192, 203)
#define		ANTIQUE_WHITE	0XFAEBD7		//(250, 235, 215)
#define		BEIGE			0XF5F5DC		//(245, 245, 220)
#define		BISQUE			0XFFE4C4		//(255, 228, 196)
#define		BLANCHED_ALMOND	0XFFEBCD		//(255, 235, 205)
#define		WHEAT			0XF5DEB3		//(245, 222, 179)
#define		CORN_SILK		0XFFF8DC		//(255, 248, 220)
#define		LEMON_CHIFFON	0XFFFACD		//(255, 250, 205)
#define		LT_GLDN_YELLOW	0XFAFAD2		//(250, 250, 210)
#define		LIGHT_YELLOW	0XFFFFE0		//(255, 255, 224)
#define		SADDLE_BROWN	0X8B4513		//(139, 69, 19)
#define		SIENNA			0XA0522D		//(160, 82, 45)
#define		CHOCOLATE		0XD2691E		//(210, 105, 30)
#define		PERU			0XCD853F		//(205, 133, 63)
#define		SANDY_BROWN		0XF4A460		//(244, 164, 96)
#define		BURLY_WOOD		0XDEB887		//(222, 184, 135)
#define		TAN				0XD2B48C		//(210, 180, 140)
#define		ROSY_BROWN		0XBC8F8F		//(188, 143, 143)
#define		MOCCASIN		0XFFE4B5		//(255, 228, 181)
#define		NAVAJO_WHITE	0XFFDEAD		//(255, 222, 173)
#define		PEACH_PUFF		0XFFDAB9		//(255, 218, 185)
#define		MISTY_ROSE		0XFFE4E1		//(255, 228, 225)
#define		LAVENDER_BLUSH	0XFFF0F5		//(255, 240, 245)
#define		LINEN			0XFAF0E6		//(250, 240, 230)
#define		OLD_LACE		0XFDF5E6		//(253, 245, 230)
#define		PAPAYA_WHIP		0XFFEFD5		//(255, 239, 213)
#define		SEA_SHELL		0XFFF5EE		//(255, 245, 238)
#define		MINT_CREAM		0XF5FFFA		//(245, 255, 250)
#define		SLATE_GRAY		0X708090		//(112, 128, 144)
#define		LT_SLATE_GRAY	0X778899		//(119, 136, 153)
#define		LT_STEEL_BLUE	0XB0C4DE		//(176, 196, 222)
#define		LAVENDER		0XE6E6FA		//(230, 230, 250)
#define		FLORAL_WHITE	0XFFFAF0		//(255, 250, 240)
#define		ALICE_BLUE		0XF0F8FF		//(240, 248, 255)
#define		GHOST_WHITE		0XF8F8FF		//(248, 248, 255)
#define		HONEYDEW		0XF0FFF0		//(240, 255, 240)
#define		IVORY			0XFFFFF0		//(255, 255, 240)
#define		AZURE			0XF0FFFF		//(240, 255, 255)
#define		SNOW			0XFFFAFA		//(255, 250, 250)
#define		BLACK			0X000000		//(0, 0, 0)
#define		DIM_GRAY		0X696969		//(105, 105, 105)
#define		GRAY			0X808080		//(128, 128, 128)
#define		DARK_GRAY		0XA9A9A9		//(169, 169, 169)
#define		SILVER			0XC0C0C0		//(192, 192, 192)
#define		LIGHT_GRAY		0XD3D3D3		//(211, 211, 211)
#define		GAINSBORO		0XDCDCDC		//(220, 220, 220)
#define		WHITE_SMOKE		0XF5F5F5		//(245, 245, 245)
#define		WHITE			0XFFFFFF		//(255, 255, 255

#pragma endregion 

#pragma endregion 

//inline int clamp(s32 min, s32 val, s32 max)
//{
//	if (val < min)return min;
//	if (val > max)return max;
//	return val;
//}
