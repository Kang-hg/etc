#include<stdio.h>

char setZeroBits(char data, int clearbitNum) {
	char res;
	res = data & ~(0x01 << clearbitNum);	// ~ 는 반전
	return res;
}

/*
int main() {
	int num1;
	char data1 = 88;

	printf("지울 비트번호:");
	scanf("%d", &num1);

	int result = setZeroBits(data1, num1);
	//result = (result > 0) ? 1 : 0;
	printf("Result: %d\n", result);

	return 0;
}
//*/

/*
int main() {
	unsigned int num;
	printf("10진수: ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("2진수: ");

	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("1");
	printf("\n");

}
//*/

/*
int main() {
	char data = 'a';
	char key = 0xff;

	char encrpted_data;
	encrpted_data = data ^ key;

	printf("암호화된 문자=%c\n", encrpted_data);

	char orig_data;
	orig_data = encrpted_data ^ key;

	printf("원래의 데이터=%c\n", orig_data);

}
//*/

/*
int main() {
	int num1, num2, a, b;
	printf("두 개의 정수를 입력하세요:");
	scanf("%d%d", &num1, &num2);

	a = num1 / num2;
	b = num1 % num2;

	printf("몫:%d 나머지:%d\n", a, b);
}
//*/

/*
int main() {
	double num1, num2, a, b, c, d;
	printf("두 개의 실수를 입력하세요:");
	scanf("%lf%lf", &num1, &num2);

	a = num1 + num2;
	b = num1 - num2;
	c = num1 * num2;
	d = num1 / num2;

	printf("합:%lf 차:%lf 곱:%lf 몫:%lf", a, b, c, d);
}
//*/

/*
int main() {
	char a;
	int num1, num2, b;
	printf("수식을 입력하세요(예: 2+5) \n");
	scanf("%d%c%d", &num1, &a, &num2);

	if (a == '+')
		b = num1 + num2;
	else
		if (a == '-')
			b = num1 - num2;
		else
			if (a == '*')
				b = num1 * num2;
			else
				if (a == '/')
					b = num1 / num2;
				else
					if (a == '%')
						b = num1 % num2;
					else
						printf("지원되지 않는 연산자입니다.\n");

	printf("%d %c %d = %d \n", num1, a, num2, b);
}
//*/

/*
int main() {
	char a;
	int num, num1, result;
	printf("수식을 입력하세요.(예: 14+33)\n");
	scanf("%d%c%d", &num, &a, &num1);

	if (a == '+')
		result = num + num1;
	else
		if (a == '-')
			result = num - num1;
		else
			if (a == '*')
				result = num * num1;
			else
				if (a == '/')
					result = num / num1;
				else
					if (a == '%')
						result = num % num1;
					else
						printf("지원하지 않는 연산자입니다.\n");

						printf("%d %c %d = %d\n", num, a, num1, result);
}
//*/

/*int main() {
	int ch;
	int result;
	printf("숫자를 입력하세요:");
	scanf("%d", &ch);
	result = ch % 4;

	if (result == 0)
		printf("4의 배수 입니다.\n");
	else
		result = (ch % 4 + 1) * 4;
		printf("%d\n", result);
}
//*/

/*
int main() {
	char num, result;
	printf("숫자를 입력하세요:");
	scanf("%d", &num);

	result = num % 4;

	if (result == 0)
		printf("4의 배수입니다.\n");
	else
		if (result == 1)
			printf("%d\n", num + 3);
		else
			if (result == 2)
				printf("%d\n", num + 2);
			else
				if (result == 3)
					printf("%d\n", num + 1);
	return 0;

}
//*/

/*
int main() {
	int num, result;
	printf("점수를 입력하세요:");
	scanf("%d", &num);

	result = num / 10;

	switch (result) {
	case 10:
		printf("만점\n");
		break;
	case 9:
		printf("수\n");
		break;
	case 8:
		printf("우\n");
		break;
	case 7:
		printf("미\n");
		break;
	case 6:
		printf("양\n");
		break;
	default:
		printf("가\n");
		break;
	}

}
//*/

/*
int main() {
	int a, b, c;
	printf("세 개의 정수를 입력하세요:");
	scanf("%d%d%d", &a, &b, &c);

	int max;
	max = (a > b) ? max : b;
	max = (max > c) ? max : c;

	printf("최대값:%d", max);
}
//*/


int main() {
	double cm, pit, inch;
	//int cm, pit, inch;
	printf("키를 입력하세요(cm):");
	scanf("%lf", &cm);

	inch = cm / 2.54;
	pit = inch / 12;


	printf("%lfcm는 %lf피트 %lf인치 입니다.\n", cm, pit, inch);
}
//*/

/*
int main() {
	int num, a, b;
	printf("정수를 입력하세요:");
	scanf("%d", &num);
	
	a = num / 10;
	b = num % 10;

	printf("십의 자리:%d\n", a);
	printf("일의 자리:%d\n", b);
}
//*/

/*
int main() {
	int num, result;
	printf("정수를 입력하세요:");
	scanf("%d", &num);

	result = ~num + 0x00000001;

	printf("2의 보수:%d\n", result);
}
//*/

/*
int main() {
	int x, y, result;
	printf("정수를 입력하세요:");
	scanf("%d", &x);
	printf("2를 곱하고 싶은 횟수:");
	scanf("%d", &y);

	result = x << y;

	printf("%d<<%d의 값:%d\n", x, y, result);
}
//*/


