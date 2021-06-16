#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
int main() {
	int  num;
	printf("숫자를 입력하세요:");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num-i; j++)
			printf("*");
		printf("\n");
	}

	
	//for (int i = num; i >= 0; i--) {
	//	for (int j = i; j >= 0; j--)
	//		printf("*");
	//	printf("\n");
	//}
	

	return 0;
}
//*/

/*
int main() {
	int num;
	printf("숫자를 입력하세요:");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i; j++) {
			printf(" ");
		}
		for (int t = 0; t <= i; t++)
			printf("*");
		printf("\n");
	}
}
//*/


int main() {
	int num,a=0;
	printf("정수를 입력하세요:");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++)
			printf("%d ", j+1);
		
		printf("\n");
	}
}