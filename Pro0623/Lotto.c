#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

/*
#define NUM 15
int main() {
	srand(time(0));
	int Lotto[NUM] = { 0 };
	int randLotto, count = 1;
	int same = 0;
	
	Lotto[0] = (rand() % 45) + 1;		// 10~20 = 10+rand()%11

	for (int i = 0; i < NUM; i++) {	
		randLotto = (rand() % 45) + 1;
		
		for (int j = 0; j <= i; j++) {
			if (Lotto[j] == randLotto) {
				same = 1;
				break;
			}
		}
		if (same == 0) {
			Lotto[i+1] = randLotto;
			count++;
		}
		else {
			same = 0;
		}
		if (count == 6) break;
		//	if (Lotto[i - 1] == Lotto[i])
		//	Lotto[i - 1] = (rand() % 45) + 1;
			
		//else
		//	printf("%d\t", Lotto[i]);
			
	}
	for (int i = 0; i < NUM; i++) 
		printf(" %d\n", Lotto[i]);
	//printf(" %d\n", Lotto[0]);
	return 0;
}
*/

/*
void disp_car(int car_number, int distance) {	//새로운 함수 정의
	int i;

	printf("CAR #%d:", car_number);
	for (i = 0; i < distance / 10; i++)			//distance값 보다 적을때 반복
		printf("*");
	printf("\n");
}

int main() {
	int car1_dist = 0, car2_dist = 0;

	srand(time(0));

	for (int i = 0; i < 6; i++) {
		car1_dist += rand() % 100;		//난수를 car1_dist에 적립
		car2_dist += rand() % 100;		//난수를 car2_dist에 적립
		disp_car(1, car1_dist);			//위에 정의한 함수 사용
		disp_car(2, car2_dist);
		printf("------------------------------------------\n");
		_getch();						//#include<conio.h> 사용시 키입력 대기
	}
	return 0;
}
*/

/*
int main() {
	int i, x, y;
	int red, green, blue;

	HDC hdc;
	hdc = GetWindowDC(GetForegroundWindow());

	srand(time(0));

	for (i = 0; i < 1000; i++) {
		x = rand() % 300;
		y = rand() % 300;

		red = rand() % 255;
		green = rand() % 255;
		blue = rand() % 255;

		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	_getch();
}
*/

/*
#define NUM 6
int main() {
	int Lotto[NUM] = { 0 };
	int randLotto = 0;
	int i;
	int n = 0;
	srand(time(0));

	while (1) {

		randLotto = rand() % 45 + 1;			//랜덤 수 생성, 중복 가능

		for (i = 0; i < n; i++) 
			if (Lotto[i] == randLotto) break;	//중복이면 빠져나와서 다시 랜덤수 생성
		
		if (n == i) Lotto[n++] = randLotto;		//중복이 아니면 n++ 위치에 저장
		if (n >= 6) break;
	}
	for (i = 0; i < NUM; i++)
		printf("%d\t", Lotto[i]);
	printf("\n");
}
*/


