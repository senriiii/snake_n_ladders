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
	void ladder1()
	{
		int m = 35;
		int n = 50;
		setcolor(GREEN);
		line(53 + m, 57 + n, 55 + m, 55 + n);
		line(53 + m, 57 + n, 133 + m, 137 + n);
		line(55 + m, 55 + n, 135 + m, 135 + n);
		line(133 + m, 137 + n, 135 + m, 135 + n);
		setfillstyle(SOLID_FILL, GREEN);
		floodfill(55 + m, 58 + n, GREEN);
		line(68 + m, 42 + n, 70 + m, 40 + n);
		line(68 + m, 42 + n, 148 + m, 122 + n);
		line(70 + m, 40 + n, 150 + m, 120 + n);
		line(148 + m, 122 + n, 150 + m, 120 + n);
		floodfill(70 + m, 43 + n, GREEN);
		line(65 + m, 65 + n, 78 + m, 52 + n);
		line(68 + m, 68 + n, 81 + m, 55 + n);
		floodfill(79 + m, 54 + n, GREEN);
		line(75 + m, 75 + n, 88 + m, 62 + n);
		line(78 + m, 78 + n, 91 + m, 65 + n);
		floodfill(89 + m, 64 + n, GREEN);
		line(85 + m, 85 + n, 98 + m, 72 + n);
		line(88 + m, 88 + n, 101 + m, 75 + n);
		floodfill(99 + m, 74 + n, GREEN);
		line(95 + m, 95 + n, 108 + m, 82 + n);
		line(98 + m, 98 + n, 111 + m, 85 + n);
		floodfill(109 + m, 84 + n, GREEN);
		line(105 + m, 105 + n, 118 + m, 92 + n);
		line(108 + m, 108 + n, 121 + m, 95 + n);
		floodfill(119 + m, 94 + n, GREEN);
		line(115 + m, 115 + n, 128 + m, 102 + n);
		line(118 + m, 118 + n, 131 + m, 105 + n);
		floodfill(129 + m, 104 + n, GREEN);
		line(125 + m, 125 + n, 138 + m, 112 + n);
		line(128 + m, 128 + n, 141 + m, 115 + n);
		floodfill(139 + m, 114 + n, GREEN);
	}
	void ladder2()
	{
		int p = -10;
		int q = 60;
		setcolor(GREEN);
		line(100 + p, 330 - q, 140 + p, 290 - q);
		line(100 + p, 330 - q, 102 + p, 332 - q);
		line(102 + p, 332 - q, 142 + p, 292 - q);
		line(142 + p, 292 - q, 140 + p, 290 - q);
		floodfill(141 + p, 292 - q, GREEN);
		line(115 + p, 345 - q, 155 + p, 305 - q);
		line(115 + p, 345 - q, 117 + p, 347 - q);
		line(117 + p, 347 - q, 157 + p, 307 - q);
		line(157 + p, 307 - q, 155 + p, 305 - q);
		floodfill(155 + p, 307 - q, GREEN);
		line(112 + p, 322 - q, 125 + p, 335 - q);
		line(114 + p, 320 - q, 127 + p, 333 - q);
		floodfill(125 + p, 334 - q, GREEN);
		line(122 + p, 312 - q, 135 + p, 325 - q);
		line(124 + p, 310 - q, 137 + p, 323 - q);
		floodfill(135 + p, 324 - q, GREEN);
		line(132 + p, 302 - q, 145 + p, 315 - q);
		line(134 + p, 300 - q, 147 + p, 313 - q);
		floodfill(145 + p, 314 - q, GREEN);
	}
	void ladder3()
	{
		int p = 205;
		int q = 235;
		setcolor(GREEN);
		line(100 + p, 330 - q, 140 + p, 290 - q);
		line(100 + p, 330 - q, 102 + p, 332 - q);
		line(102 + p, 332 - q, 142 + p, 292 - q);
		line(142 + p, 292 - q, 140 + p, 290 - q);
		floodfill(141 + p, 292 - q, GREEN);
		line(115 + p, 345 - q, 155 + p, 305 - q);
		line(115 + p, 345 - q, 117 + p, 347 - q);
		line(117 + p, 347 - q, 157 + p, 307 - q);
		line(157 + p, 307 - q, 155 + p, 305 - q);
		floodfill(155 + p, 307 - q, GREEN);
		line(112 + p, 322 - q, 125 + p, 335 - q);
		line(114 + p, 320 - q, 127 + p, 333 - q);
		floodfill(125 + p, 334 - q, GREEN);
		line(122 + p, 312 - q, 135 + p, 325 - q);
		line(124 + p, 310 - q, 137 + p, 323 - q);
		floodfill(135 + p, 324 - q, GREEN);
		line(132 + p, 302 - q, 145 + p, 315 - q);
		line(134 + p, 300 - q, 147 + p, 313 - q);
		floodfill(145 + p, 314 - q, GREEN);
	}
	void ladder4()
	{
		int m = 210;
		int n = 260;
		setcolor(GREEN);
		line(53 + m, 57 + n, 55 + m, 55 + n);
		line(53 + m, 57 + n, 133 + m, 137 + n);
		line(55 + m, 55 + n, 135 + m, 135 + n);
		line(133 + m, 137 + n, 135 + m, 135 + n);
		setfillstyle(SOLID_FILL, GREEN);
		floodfill(55 + m, 58 + n, GREEN);
		line(68 + m, 42 + n, 70 + m, 40 + n);
		line(68 + m, 42 + n, 148 + m, 122 + n);
		line(70 + m, 40 + n, 150 + m, 120 + n);
		line(148 + m, 122 + n, 150 + m, 120 + n);
		floodfill(70 + m, 43 + n, GREEN);
		line(65 + m, 65 + n, 78 + m, 52 + n);
		line(68 + m, 68 + n, 81 + m, 55 + n);
		floodfill(79 + m, 54 + n, GREEN);
		line(75 + m, 75 + n, 88 + m, 62 + n);
		line(78 + m, 78 + n, 91 + m, 65 + n);
		floodfill(89 + m, 64 + n, GREEN);
		line(85 + m, 85 + n, 98 + m, 72 + n);
		line(88 + m, 88 + n, 101 + m, 75 + n);
		floodfill(99 + m, 74 + n, GREEN);
		line(95 + m, 95 + n, 108 + m, 82 + n);
		line(98 + m, 98 + n, 111 + m, 85 + n);
		floodfill(109 + m, 84 + n, GREEN);
		line(105 + m, 105 + n, 118 + m, 92 + n);
		line(108 + m, 108 + n, 121 + m, 95 + n);
		floodfill(119 + m, 94 + n, GREEN);
		line(115 + m, 115 + n, 128 + m, 102 + n);
		line(118 + m, 118 + n, 131 + m, 105 + n);
		floodfill(129 + m, 104 + n, GREEN);
		line(125 + m, 125 + n, 138 + m, 112 + n);
		line(128 + m, 128 + n, 141 + m, 115 + n);
		floodfill(139 + m, 114 + n, GREEN);
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
class SnakesAndLadder {
public:
	int board[101][101] = { {0} };
	int currpos = -1;
	void setDefaultBoard() {
		board[99][17] = 1;
		board[69][46] = 1;
		board[9][27] = 1;
		board[39][43] = 1;
		board[64][82] = 1;
		board[88][92] = 1;
	}
};
class StartGame : public SnakesAndLadder {
public:
	string playerName = "";
	int isValidToBegin(int die) { //check if currpos is -1 and die gave 6 so player can begin
		if (currpos == -1 && die != 6) {
			return 0;
		}
		else if (currpos == -1 && die == 6) {
			return 1;
		} 
		else if (currpos > -1 && die == 6) {
			return 3;
		}
		else {
			return 2;
		}
	}
	int throwDie() {
		graphics g;
		cout << endl;
		cout << "Its " << playerName << "'s turn" << endl;
		cout << "Press 1 to throw the die: ";
		string choice;
		cin >> choice;
		if (choice == "1") {
			int num = g.dice();
			cout << playerName << " got " << num << endl;
			incrementCurrPos(num);
			return 1;
		}
		else {
			cout << "BYE! Have a Good Day!" << endl;
			return 0;
		}
	};
	void incrementCurrPos(int n) {
		if (isValidToBegin(n)==2) {
			if (!isMoveValid(n)) {
				cout << playerName << "Can't go beyond 100" << endl;
				int diff = 100 - currpos;
				cout << "Get a number between 1 to " << diff << endl;
				return;
			}
			currpos += n;
			int sOrL = checkForLadderOrLadder(currpos);
			if (sOrL == 0) {
				cout << "No ladder, No snake found" << endl;
			}
			else {
				if (sOrL < currpos) {
					cout << "OH NO !!! you found a snake !!! HISSSSSSSSSSSS" << endl;
					currpos = sOrL;
				}
				else {
					cout << "OH YEAH!!! You got a Ladder" << endl;
					currpos = sOrL;
				}
			}
		}
		else if (isValidToBegin(n) == 1) {
				cout << "Yuhhuuuuuuuu " << playerName << "'s token is unlocked now!" << endl;
				cout << "Take another turn" << endl;
				currpos++;
				throwDie();
		}
		else if (isValidToBegin(n) == 3) {
			if (!isMoveValid(n)) {
				cout << playerName << "Can't go beyond 100" << endl;
				int diff = 100 - currpos;
				cout << "get a number between 1 to " << diff << endl;
				return;
			}
			cout << "Wuhhuuu you got a 6, take another turn" << endl;
			currpos+=6;
			throwDie();
		}
		else {
			cout << "Get a 6 to begin your game" << endl;
		}
	}; //increments currpos by the die and then checks for snakes/ladders
	bool isMoveValid(int n) {
		if (currpos + n > 100) return false;
		else return true;
	}; // check if final position after incrementing die to currpos exceeds 100 or not
	int checkForLadderOrLadder(int initial) {
		for (int i = 1; i <= 100; i++) {
			if (board[initial][i] == 1) {
				return i;
			}
		}
		return 0;
	}
};
void draw_line(int n, char ch)
{
	for (int i = 0; i < n; i++) {
		cout << ch;
	}

}
int main()
{
RE: {
	srand(time(0));
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	graphics g;
	g.box();
	g.numbers();
	g.numbers();
	g.numbers();
	g.numbers();
	g.ladder1();
	g.ladder2();
	g.ladder3();
	g.ladder4();
	g.snake1();
	g.snake2();
	g.player1();
	g.player2();
	g.text();
	int choice;
	do {
		cout << "\n";
		draw_line(50, '='); cout << "\n";
		draw_line(50, '='); cout << "\n";
		draw_line(50, '=');
		cout << "\nWHEN CODERS CAN'T FIND GAME, THEY MAKE THEIR OWN!\n";
		cout << "\n\t\tSNAKE LADDER GAME\n";
		draw_line(50, '='); cout << "\n";
		draw_line(50, '='); cout << "\n";
		draw_line(50, '=');;
		StartGame player1, player2;
		player1.setDefaultBoard();
		player2.setDefaultBoard();
		cout << endl;
		cout << endl;
		player1.playerName = "Player 1";
		player2.playerName = "Player 2";
		while (true) {
			int num1 = player1.throwDie();
			g.curr1(player1.currpos);
			int num2 = player2.throwDie();
			g.curr2(player2.currpos);
			if (num1 == 0 || num2 == 0) {
				if (player1.currpos > player2.currpos) {
					cout << player1.playerName << " won the game!!!" << endl;
					cout << "Congratulations !!! " << player1.playerName << ", You won the game!!\n\n";
					draw_line(52, '#');
					break;
				}
				else if (player1.currpos < player2.currpos) {
					cout << player2.playerName << " won the game!!" << endl;
					cout << "Congratulations !!! " << player1.playerName << ", You won the game!!\n\n";
					draw_line(52, '#');
					break;
				}
				else {
					cout << "OH! no, There's a Tie" << endl;
					draw_line(52, '#');
					break;
				}
			}
			else {
				if (player1.currpos == 100) {
					cout << endl;
					cout << "Congratulations !!! " << player1.playerName << ", You won the game\n\n";
					draw_line(52, '#');
					break;
				}
				if (player2.currpos == 100) {
					cout << endl;
					cout << "Congratulations !!! " << player2.playerName << ", You won the game\n\n";
					draw_line(52, '#');
					break;
				}
			}
			cout << "\n";
			draw_line(52, '_');
			cout << endl;
		}
		goto RE;
		cout << endl;
		cout << "Do you want to play again!!" << endl;
		cout << "Press 1 to play again" << endl;
		cout << "Press 0 to exit " << endl;
		cin >> choice;
		if (choice == 0) {
			cout << "Hope to see you again!!! " << endl;
			break;

		}

	} while (true);

	getch();
	}
}


