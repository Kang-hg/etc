#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#define PI 3.141592

/*
int x = 10, y = 20;

void swap() {
	int temp;

	temp = x;
	x = y;
	y = temp;
}
int main() {
	//int x = 10, y = 20;
	printf("x= %d  y= %d \n", x, y);

	swap();
	printf("x= %d  y= %d \n", x, y);

	return 0;
}
*/

/*
double rad(double degree) {
	return PI * degree / 180.0;
}
int main() {
	
	int degree, x, y;
	double radian, result;

	HWND hwnd = GetForegroundWindow();
	HDC hdc = GetWindowDC(hwnd);

	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 500, 200);

	MoveToEx(hdc, 30, 200, 0);
	LineTo(hdc, 30, 0);

	for (degree = 0; degree <= 360; degree++) {
		result = sin(rad((double)degree));
		x = degree + 30;
		y = 200 - (int)(100.0 * result);
		SetPixel(hdc, x, y, RGB(255, 0, 0));
	}
	return 0;
}
*/

/*
double cal_area(double r) {
	return PI * r * r;
}
int main() {
	double r, area;
	printf("���� �������� �Է��ϼ���:");
	scanf("%lf" ,&r);

	area = cal_area(r);
	printf("���� ������ %lf�Դϴ�.", area);
}
*/


int main() {
	int result, x, y, num;
	int a, b, c, d, e;
	while () {
		printf("====================================\n");
		printf("		MENU\n");
		printf("====================================\n");
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ������\n");
		printf("5. ������\n");
		printf("���ϴ� �޴��� �Է��ϼ���(1~5):");
		scanf("%d", &num);
		printf("���� 2���� �Է��ϼ���:");
		scanf("%d%d", x, y);
		switch (num) {
		case1:
			a = x + y;
		case2:
			b = x - y;
		case3:
			c = x * y;
		case4:
			d = x / y;
		case5:
			e = x % y;
		}
	}
}