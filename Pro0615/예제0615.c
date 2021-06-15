#include<stdio.h>
//int clearBit(char data, int num);	//함수의 원형 선언

int clearBit(char data, int num, int num1) {
	int res;
	char basicNum;
	basicNum = (num1 == 1) ? 0x01 : 0;
	basicNum = (num1 == 2) ? 0x03 : basicNum;
	basicNum = (num1 == 3) ? 0x07 : basicNum;
	res = data & (basicNum << num - (num1 - 1));
	return res >> num - (num1 - 1);
}


/*
int main() {
	int num1;
	char data1 = 88;

	printf("관심 비트번호:");
	scanf("%d", &num1);

	int result = clearBit(data1, num1);
	result = (result > 0) ? 1 : 0;		//(result ? 1 : 0) = 같은 내용(0이면 거짓, 0이 아니면 참)
	//result = result >> num;
	printf("Result: %d\n", result);

	return 0;
}
//*/

/*
int main() {
	int num, num1;
	char data = 88;

	printf("관심 비트번호: ");
	scanf("%d", &num);
	printf("관심 비트수: ");
	scanf("%d", &num1);

	int result = clearBit(data, num, num1);
	printf("Result: %d\n", result);

}
//*/