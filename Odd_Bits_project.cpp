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
	void snake1()
	{
		int m = 1;
		int n = -1;
		setcolor(YELLOW);
		line(110, 72, 100, 62); //line1
		line(110, 64, 100, 71); //line2
		line(110, 64, 215, 64); //line2
		line(110, 72, 210, 69); //line1
		line(215, 64, 215, 245);
		line(210, 69, 210, 240);
		line(215, 245, 175, 245);
		line(210, 240, 170, 240);
		line(175, 245, 175, 350);
		line(170, 240, 175, 350);
		line(110 + n, 72 + m, 100 + n, 62 + m); //line1
		line(110 + m, 64 + m, 100 + n, 71 + m); //line2
		line(110 + m, 64 + n, 215 + m, 64 + n); //line2
		line(110 + m, 72 + n, 210 + m, 69 + n); //line1
		line(215 + m, 64 + n, 215 + m, 245 + n);
		line(210 + m, 69 + n, 210 + m, 240 + n);
		line(215 + m, 245 + n, 175 + m, 245 + n);
		line(210 + m, 240 + n, 170 + m, 240 + n);
		line(175 + m, 245 + n, 175 + m, 350 + n);
		line(170 + m, 240 + n, 175 + m, 350 + n);
	}
	void snake2()
	{
		int m = 1;
		int n = -1;
		line(345, 177, 355, 167); //line1
		line(345, 169, 355, 174); //line2
		line(345, 169, 310, 170); //line2
		line(345, 177, 315, 173); //line1
		line(315, 173, 315, 248);
		line(310, 170, 310, 243);
		line(315, 248, 280, 248);
		line(310, 243, 270, 243);
		line(280, 248, 245, 245);
		line(270, 243, 245, 245);
		line(345 + m, 177 + n, 355 + m, 167 + n); //line1
		line(345 + m, 169 + n, 355 + m, 174 + n); //line2
		line(345 + m, 169 + n, 310 + m, 170 + n); //line2
		line(345 + m, 177 + n, 315 + m, 173 + n); //line1
		line(315 + m, 173 + n, 315 + m, 248 + n);
		line(310 + m, 170 + n, 310 + m, 243 + n);
		line(315 + m, 248 + n, 280 + m, 248 + n);
		line(310 + m, 243 + n, 270 + m, 243 + n);
		line(280 + m, 248 + n, 245 + m, 245 + n);
		line(270 + m, 243 + n, 245 + m, 245 + n);
	}
	void text()
	{
		outtextxy(445, 50, "The Classic Game of");
		settextstyle(GOTHIC_FONT, HORIZ_DIR, 1.5);
		setcolor(LIGHTRED);
		outtextxy(410, 65, "Snake & Ladder");
		setcolor(LIGHTCYAN);
		outtextxy(483, 159, "DICE");
	}
	int dice()
	{
		setcolor(WHITE);
		settextstyle(GOTHIC_FONT, HORIZ_DIR, 6);
		char strr[4];
		int variable = rand() % 6 + 1;
		sprintf(strr, "%d", variable);
		outtextxy(495, 195, strr);
		return variable;
	}
	void player1()
	{
		outtextxy(460, 297, "Player 1:");
	}
	void player2()
	{
		outtextxy(460, 347, "Player 2:");
	}
	void curr1(int n)
	{
		settextstyle(0, HORIZ_DIR, 2);
		if (n == -1) {
			outtextxy(535, 297, "0");
		}
		else {
			char strr[4];
			sprintf(strr, "%d", n);
			outtextxy(535, 297, strr);
		}
	}
	void curr2(int m)
	{
		settextstyle(0, HORIZ_DIR, 2);
		if (m == -1) {
			outtextxy(535, 347, "0");
		}
		else {
			char strr[4];
			sprintf(strr, "%d", m);
			outtextxy(535, 347, strr);
		}
	}
};
