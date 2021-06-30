#include<stdio.h>

/*
int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int rem(int x, int y);

int main() {
	int ans1, num1, num2;
	char ans2;

	do {
		printf("========================\n");
		printf("MENU\n");
		printf("========================\n");
		printf("1. 덧셈\n");
		printf("2. 뺄셈\n");
		printf("3. 곱셈\n");
		printf("4. 나눗셈\n");
		printf("5. 나머지\n");
		printf("원하는 메뉴를 선택하세요(1~5): ");
		scanf("%d", &ans1);
		printf("숫자 2개를 입력하세요: ");
		scanf("%d%d", &num1, &num2);
		if (ans1 == 1)
			printf("연산 결과: %d", sum(num1, num2));
		else if (ans1 == 2)
			printf("연산 결과: %d", sub(num1, num2));
		else if (ans1 == 3)
			printf("연산 결과: %d", mul(num1, num2));
		else if (ans1 == 4)
			printf("연산 결과: %d", div(num1, num2));
		else if (ans1 == 5)
			printf("연산 결과: %d", rem(num1, num2));
		else
			printf("잘못 입력하셨습니다.");

		printf("계속하려면 y를 누르세요: ");
		scanf("%c", &ans2);

	} while (ans2 == 'y');
	
}

int sum(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	return x / y;
}

int rem(int x, int y) {
	return x % y;
}

*/