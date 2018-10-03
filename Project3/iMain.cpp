#include "iGraphics.h"
#include<time.h>
#include<stdlib.h>

int recy[10] = { 4, -100, 76,-80,126, 100, 150, -56, 250, 200 };
int recx0 = rand() % 200;
int recx1 = rand() % 200;
int recx2 = rand() % 200;
int recx3 = rand() % 200;
int recx4 = rand() % 200;
int recx5 = rand() % 190+180;
int recx6 = rand() % 190 + 180;
int recx7 = rand() % 190 + 180;
int recx8 = rand() % 190 + 180;
int recx9 = rand() % 190 + 180;
int i = 0, j = 0, k = 0, l = 0, m= 0,n = 0,o = 0;
int circlex = recx6 + 15, circley = recy[6] + 14;
int score = 0, life = 3;
int destroyerx1 = rand() % 200, destroyerx2 = rand() % 200, destroyerx3 = rand() % 190 + 180,destroyerx4 = rand() % 190 + 180;
int destroyery1 = 200, destroyery2 = -26, destroyery3 = -90, destroyery4 = 28;
int lifeaddx = rand() % 390, lifeaddy = -984;
char str_score[25], str_life[25];

void DrawRectangle()
{
	iSetcolor(255, 255, 0);
	i++;
	iFilledRectangle(recx0, recy[0], 36, 8);
	if (i % 25 == 0){
		recy[0]+=1;
		if (recy[0] >= 400){
			recy[0] = 0;
			recx0 = rand() % 200;
		}
	}
	iFilledRectangle(recx1, recy[1], 36, 8);
	if (i % 25 == 0){
		recy[1]+=1;
		if (recy[1] >= 400){
			recy[1] = 0;
			recx1 = rand() % 200;
		}
	}
	iFilledRectangle(recx2, recy[2], 36, 8);
	if (i % 25 == 0){
		recy[2]+=1;
		if (recy[2] >= 400){
			recy[2] = 0;
			recx2 = rand() % 200;
		}
	}
	iFilledRectangle(recx3, recy[3], 36, 8);
	if (i % 25 == 0){
		recy[3]+=1;
		if (recy[3] >= 400){
			recy[3] = 0;
			recx3 = rand() % 200;
		}
	}
	iFilledRectangle(recx4, recy[4], 36, 8);
	if (i % 25 == 0){
		recy[4]+=1;
		if (recy[4] >= 400){
			recy[4] = 0;
			recx4 = rand() % 200;
		}
	}
	iFilledRectangle(recx5, recy[5], 36, 8);
	if (i % 25 == 0){
		recy[5]+=1;
		if (recy[5] >= 400){
			recy[5] = 0;
			recx5 = rand() % 190 + 180;
		}
	}
	iFilledRectangle(recx6, recy[6], 36, 8);
	if (i % 25 == 0){
		recy[6]+=1;
		if (recy[6] >= 400){
			recy[6] = 0;
			recx6 = rand() % 190 + 180;
		}
	}
	iFilledRectangle(recx7, recy[7], 36, 8);
	if (i % 25 == 0){
		recy[7]+=1;
		if (recy[7] >= 400){
			recy[7] = 0;
			recx7 = rand() % 190 + 180;
		}
	}
	iFilledRectangle(recx8, recy[8], 36, 8);
	if (i % 25 == 0){
		recy[8]+=1;
		if (recy[8] >= 400){
			recy[8] = 0;
			recx8 = rand() % 190 + 180;
		}
	}
	iFilledRectangle(recx9, recy[9], 36, 8);
	if (i % 25 == 0){
		recy[9]+=1;
		if (recy[9] >= 400){
			recy[9] = 0;
			recx9 = rand() % 190 + 180;
		}
	}
}

void DrawCircle()
{
	iSetcolor(255, 255, 255);
	iFilledCircle(circlex, circley, 6, 200);
	j++;
	if (j % 25 == 0){
		if ((circlex >= recx0 && circlex <= recx0 + 36 && (circley == recy[0] + 14)) || (circlex >= recx1 && circlex <= recx1 + 36 && ( circley == recy[1] + 14)) || (circlex >= recx2 && circlex <= recx2 + 36 && ( circley == recy[2] + 14)) || (circlex >= recx3 && circlex <= recx3 + 36 && (circley == recy[3] + 14)) || (circlex >= recx4 && circlex <= recx4 + 36 && (circley == recy[4] + 14)) || (circlex >= recx5 && circlex <= recx5 + 36 && (circley == recy[5] + 14)) || (circlex >= recx6 && circlex <= recx6 + 36 && (circley == recy[6] + 14)) || (circlex >= recx7 && circlex <= recx7 + 36 && (circley == recy[7] + 14)) || (circlex >= recx8 && circlex <= recx8 + 36 && (circley == recy[8] + 14)) || (circlex >= recx9 && circlex <= recx9 + 36 && (circley == recy[9] + 14))) circley += 1;
		else circley -= 1;
	}
	if (circley >= 400){
		if (circley == 400 || circley == 398)life--;
		if (recy[5] <= 200)circley = recy[5] + 14;
		else if (recy[6] <= 200)circley = recy[6] + 14;
		else if (recy[7] <= 200)circley = recy[7] + 14;
		else if (recy[8] <= 200)circley = recy[8] + 14;
		else if (recy[9] <= 200)circley = recy[9] + 14;
		else if (recy[0] <= 200)circley = recy[0] + 14;
		else if (recy[1] <= 200)circley = recy[1] + 14;
		else if (recy[2] <= 200)circley = recy[2] + 14;
		else if (recy[3] <= 200)circley = recy[3] + 14;
		else if (recy[4] <= 200)circley = recy[4] + 14;
		if (recy[5] <= 200)circlex = recx5 + 15;
		else if (recy[6] <= 200)circlex = recx6 + 15;
		else if (recy[7] <= 200)circlex = recx7 + 15;
		else if (recy[8] <= 200)circlex = recx8 + 15;
		else if (recy[9] <= 200)circlex = recx9 + 15;
		else if (recy[0] <= 200)circlex = recx0 + 15;
		else if (recy[1] <= 200)circlex = recx1 + 15;
		else if (recy[2] <= 200)circlex = recx2 + 15;
		else if (recy[3] <= 200)circlex = recx3 + 15;
		else if (recy[4] <= 200)circlex = recx4 + 15;
	}



	if (circley <= -4){
		if (circley == 0 || circley == -2 || circley == -4)life--;
		if (recy[5] <= 200)circley = recy[5] + 14;
		else if (recy[6] <= 200)circley = recy[6] + 14;
		else if (recy[7] <= 200)circley = recy[7] + 14;
		else if (recy[8] <= 200)circley = recy[8] + 14;
		else if (recy[9] <= 200)circley = recy[9] + 14;
		else if (recy[0] <= 200)circley = recy[0] + 14;
		else if (recy[1] <= 200)circley = recy[1] + 14;
		else if (recy[2] <= 200)circley = recy[2] + 14;
		else if (recy[3] <= 200)circley = recy[3] + 14;
		else if (recy[4] <= 200)circley = recy[4] + 14;
		if (recy[5] <= 200)circlex = recx5 + 15;
		else if (recy[6] <= 200)circlex = recx6 + 15;
		else if (recy[7] <= 200)circlex = recx7 + 15;
		else if (recy[8] <= 200)circlex = recx8 + 15;
		else if (recy[9] <= 200)circlex = recx9 + 15;
		else if (recy[0] <= 200)circlex = recx0 + 15;
		else if (recy[1] <= 200)circlex = recx1 + 15;
		else if (recy[2] <= 200)circlex = recx2 + 15;
		else if (recy[3] <= 200)circlex = recx3 + 15;
		else if (recy[4] <= 200)circlex = recx4 + 15;
	}
}

void ShowScore()
{
	iSetcolor(0,0, 255);
	iFilledRectangle(0, 401, 400, 100);
	iSetcolor(255, 255, 0);
	iText(130, 460, "RAPID ROLL", GLUT_BITMAP_TIMES_ROMAN_24);
	k++;
	if (k % 1000 == 0 && life != 0)score++;
	iText(30, 430, "SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(130,430, str_score, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf_s(str_score, "%d",score);
	iText(230, 430, "LIFE : ", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(310, 430, str_life, GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf_s(str_life, "%d", life);
	if (life == 0){
		iDelay(1);
		iSetcolor(0, 0, 255);
		iFilledRectangle(0, 0, 400, 500);
		iSetcolor(255, 255, 0);
		iText(150, 300, "GAME OVER", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(120, 200, "YOUR SCORE : ",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(290, 200, str_score, GLUT_BITMAP_TIMES_ROMAN_24);
		sprintf_s(str_score, "%d", score);

	}
}

void DrawDestroyer()
{
	iSetcolor(255, 0, 0);
	l++;
	iFilledRectangle(destroyerx1, destroyery1, 36, 8);
	if (l % 25 == 0){
		destroyery1 += 1;
		if (destroyery1 >= 400){
			destroyery1 = 0;
			destroyerx1 = rand() % 200;
		}
	}
	iFilledRectangle(destroyerx2, destroyery2, 36, 8);
	if (l % 25 == 0){
		destroyery2 += 1;
		if (destroyery2 >= 400){
			destroyery2 = 0;
			destroyerx2 = rand() % 200;
		}
	}
	iFilledRectangle(destroyerx3, destroyery3, 36, 8);
	if (l % 25 == 0){
		destroyery3 += 1;
		if (destroyery3 >= 400){
			destroyery3 = 0;
			destroyerx3 = rand() % 190 + 180;
		}
	}
	iFilledRectangle(destroyerx4, destroyery4, 36, 8);
	if (l % 25 == 0){
		destroyery4 += 1;
		if (destroyery4 >= 400){
			destroyery4 = 0;
			destroyerx4 = rand() % 190 + 180;
		}
	}
	if ((circlex >= destroyerx1-4 && circlex <= destroyerx1 + 40 && (circley == destroyery1 + 14 || circley == destroyery1 + 12)) || (circlex >= destroyerx2-4 && circlex <= destroyerx2 + 40 && (circley == destroyery2 + 14 || circley == destroyery2 + 12)) || (circlex >= destroyerx3-4 && circlex <= destroyerx3 + 40 && (circley == destroyery3 + 14 || circley == destroyery3 + 12)) || (circlex >= destroyerx4-4 && circlex <= destroyerx4 + 40 && (circley == destroyery4 + 14 || circley == destroyery4 + 12))){
		life--;
		if (recy[5] <= 200)circley = recy[5] + 14;
		else if (recy[6] <= 200)circley = recy[6] + 14;
		else if (recy[7] <= 200)circley = recy[7] + 14;
		else if (recy[8] <= 200)circley = recy[8] + 14;
		else if (recy[9] <= 200)circley = recy[9] + 14;
		else if (recy[0] <= 200)circley = recy[0] + 14;
		else if (recy[1] <= 200)circley = recy[1] + 14;
		else if (recy[2] <= 200)circley = recy[2] + 14;
		else if (recy[3] <= 200)circley = recy[3] + 14;
		else if (recy[4] <= 200)circley = recy[4] + 14;
		if (recy[5] <= 200)circlex = recx5 + 15;
		else if (recy[6] <= 200)circlex = recx6 + 15;
		else if (recy[7] <= 200)circlex = recx7 + 15;
		else if (recy[8] <= 200)circlex = recx8 + 15;
		else if (recy[9] <= 200)circlex = recx9 + 15;
		else if (recy[0] <= 200)circlex = recx0 + 15;
		else if (recy[1] <= 200)circlex = recx1 + 15;
		else if (recy[2] <= 200)circlex = recx2 + 15;
		else if (recy[3] <= 200)circlex = recx3 + 15;
		else if (recy[4] <= 200)circlex = recx4 + 15;
	}

	
}

void DrawLife()
{
	iSetcolor(0, 255, 0);
	o++;
	iFilledCircle(lifeaddx, lifeaddy, 6, 4);
	if (o % 25 == 0) {
		lifeaddy += 1;
		if (lifeaddy >= 600){
			lifeaddx = rand() % 390;
			lifeaddy = -1000;
		}
	}
	if (lifeaddx >= circlex - 12 && lifeaddx <= circlex + 12 && lifeaddy >= circley - 12 && lifeaddy <= circley + 12) {
		life++;
		lifeaddx = rand() % 390;
		lifeaddy = -1000;
	}
}



void iDraw()
{

	iClear();
	DrawRectangle();
	DrawCircle();
	DrawDestroyer();
	DrawLife();
	ShowScore();


}
void iKeyboard(unsigned char key )
{
	if (key == 'a' && circlex >= 6)circlex -= 4;
	else if (key == 's' && circlex <= 394)circlex += 4;
	else if (key == 'e')exit(0);
}


void iSpecialKeyboard(unsigned char key)
{

}
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN){}

}
void iMouseMove(int mx, int my){

}


int main()
{

	iInitialize(400, 500, "RAPID ROLL");
	return 0;
}
