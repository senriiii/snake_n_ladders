#include<stdio.h>
#include"graphics.h"
#include<cstdlib>
#include<iostream>
#include<random>
#include<time.h>;
using namespace std;
class graphics {
public:
	void* dot;
	void numbers()
	{
		setcolor(WHITE);
		outtextxy(55, 60, "100");
		outtextxy(90, 60, " 99");
		outtextxy(125, 60, " 98");
		outtextxy(160, 60, " 97");
		outtextxy(195, 60, " 96");
		outtextxy(230, 60, " 95");
		outtextxy(265, 60, " 94");
		outtextxy(300, 60, " 93");
		outtextxy(335, 60, " 92");
		outtextxy(370, 60, " 91");
		outtextxy(370, 95, " 90");
		outtextxy(335, 95, " 89");
		outtextxy(300, 95, " 88");
		outtextxy(265, 95, " 87");
		outtextxy(230, 95, " 86");
		outtextxy(195, 95, " 85");
		outtextxy(160, 95, " 84");
		outtextxy(125, 95, " 83");
		outtextxy(90, 95, " 82");
		outtextxy(55, 95, " 81");
		outtextxy(55, 130, " 80");
		outtextxy(90, 130, " 79");
		outtextxy(125, 130, " 78");
		outtextxy(160, 130, " 77");
		outtextxy(195, 130, " 76");
		outtextxy(230, 130, " 75");
		outtextxy(265, 130, " 74");
		outtextxy(300, 130, " 73");
		outtextxy(335, 130, " 72");
		outtextxy(370, 130, " 71");
		outtextxy(370, 165, " 70");
		outtextxy(90, 165, " 62");
		outtextxy(125, 165, " 63");
		outtextxy(160, 165, " 64");
		outtextxy(195, 165, " 65");
		outtextxy(230, 165, " 66");
		outtextxy(265, 165, " 67");
		outtextxy(300, 165, " 68");
		outtextxy(335, 165, " 69");
		outtextxy(55, 165, " 61");
		outtextxy(55, 200, " 60");
		outtextxy(90, 200, " 59");
		outtextxy(125, 200, " 58");
		outtextxy(160, 200, " 57");
		outtextxy(195, 200, " 56");
		outtextxy(230, 200, " 55");
		outtextxy(265, 200, " 54");
		outtextxy(300, 200, " 53");
		outtextxy(335, 200, " 52");
		outtextxy(370, 200, " 51");
		outtextxy(90, 235, " 42");
		outtextxy(125, 235, " 43");
		outtextxy(160, 235, " 44");
		outtextxy(195, 235, " 45");
		outtextxy(230, 235, " 46");
		outtextxy(265, 235, " 47");
		outtextxy(300, 235, " 48");
		outtextxy(335, 235, " 49");
		outtextxy(370, 235, " 50");
		outtextxy(55, 235, " 41");
		outtextxy(55, 270, " 40");
		outtextxy(90, 270, " 39");
		outtextxy(125, 270, " 38");
		outtextxy(160, 270, " 37");
		outtextxy(195, 270, " 36");
		outtextxy(230, 270, " 35");
		outtextxy(265, 270, " 34");
		outtextxy(300, 270, " 33");
		outtextxy(335, 270, " 32");
		outtextxy(370, 270, " 31");
		outtextxy(370, 305, " 30");
		outtextxy(335, 305, " 29");
		outtextxy(300, 305, " 28");
		outtextxy(265, 305, " 27");
		outtextxy(230, 305, " 26");
		outtextxy(195, 305, " 25");
		outtextxy(160, 305, " 24");
		outtextxy(125, 305, " 23");
		outtextxy(90, 305, " 22");
		outtextxy(55, 305, " 21");
		outtextxy(55, 340, " 20");
		outtextxy(90, 340, " 19");
		outtextxy(125, 340, " 18");
		outtextxy(160, 340, " 17");
		outtextxy(195, 340, " 16");
		outtextxy(230, 340, " 15");
		outtextxy(265, 340, " 14");
		outtextxy(300, 340, " 13");
		outtextxy(335, 340, " 12");
		outtextxy(370, 340, " 11");
		outtextxy(370, 375, " 10");
		outtextxy(335, 375, "  9");
		outtextxy(300, 375, "  8");
		outtextxy(265, 375, "  7");
		outtextxy(230, 375, "  6");
		outtextxy(195, 375, "  5");
		outtextxy(160, 375, "  4");
		outtextxy(125, 375, "  3");
		outtextxy(90, 375, "  2");
		outtextxy(55, 375, "  1");
	}
	void box()
	{
		setcolor(15);
		rectangle(45, 45, 405, 405);
		rectangle(46, 46, 404, 404);
		for (int k = 50, l = 85; k <= 420, l <= 420; k += 35, l += 35)
		{
			for (int i = 50, j = 85; i <= 420, j <= 420; i += 35, j += 35)
			{
				rectangle(k, i, l, j);
				rectangle(k + 1, i + 1, l - 1, j - 1);

			}
		}
		rectangle(450, 165, 590, 270);
		rectangle(455, 170, 585, 265);
		rectangle(450, 285, 590, 325);
		rectangle(455, 290, 585, 320);
		setfillstyle(SOLID_FILL, GREEN);
		floodfill(456, 291, WHITE);
		rectangle(450, 335, 590, 375);
		rectangle(455, 340, 585, 370);
		setfillstyle(SOLID_FILL, RED);
		floodfill(456, 341, WHITE);
	}
};