#include<stdio.h>

char setZeroBits(char data, int clearbitNum) {
	char res;
	res = data & ~(0x01 << clearbitNum);	// ~ �� ����
	return res;
}

/*
int main() {
	int num1;
	char data1 = 88;

	printf("���� ��Ʈ��ȣ:");
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
	printf("10����: ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("2����: ");

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

	printf("��ȣȭ�� ����=%c\n", encrpted_data);

	char orig_data;
	orig_data = encrpted_data ^ key;

	printf("������ ������=%c\n", orig_data);

}
//*/

/*
int main() {
	int num1, num2, a, b;
	printf("�� ���� ������ �Է��ϼ���:");
	scanf("%d%d", &num1, &num2);

	a = num1 / num2;
	b = num1 % num2;

	printf("��:%d ������:%d\n", a, b);
}
//*/

/*
int main() {
	double num1, num2, a, b, c, d;
	printf("�� ���� �Ǽ��� �Է��ϼ���:");
	scanf("%lf%lf", &num1, &num2);

	a = num1 + num2;
	b = num1 - num2;
	c = num1 * num2;
	d = num1 / num2;

	printf("��:%lf ��:%lf ��:%lf ��:%lf", a, b, c, d);
}
//*/

/*
int main() {
	char a;
	int num1, num2, b;
	printf("������ �Է��ϼ���(��: 2+5) \n");
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
						printf("�������� �ʴ� �������Դϴ�.\n");

	printf("%d %c %d = %d \n", num1, a, num2, b);
}
//*/

/*
int main() {
	char a;
	int num, num1, result;
	printf("������ �Է��ϼ���.(��: 14+33)\n");
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
						printf("�������� �ʴ� �������Դϴ�.\n");

						printf("%d %c %d = %d\n", num, a, num1, result);
}
//*/

/*int main() {
	int ch;
	int result;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &ch);
	result = ch % 4;

	if (result == 0)
		printf("4�� ��� �Դϴ�.\n");
	else
		result = (ch % 4 + 1) * 4;
		printf("%d\n", result);
}
//*/

/*
int main() {
	char num, result;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &num);

	result = num % 4;

	if (result == 0)
		printf("4�� ����Դϴ�.\n");
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
	printf("������ �Է��ϼ���:");
	scanf("%d", &num);

	result = num / 10;

	switch (result) {
	case 10:
		printf("����\n");
		break;
	case 9:
		printf("��\n");
		break;
	case 8:
		printf("��\n");
		break;
	case 7:
		printf("��\n");
		break;
	case 6:
		printf("��\n");
		break;
	default:
		printf("��\n");
		break;
	}

}
//*/

/*
int main() {
	int a, b, c;
	printf("�� ���� ������ �Է��ϼ���:");
	scanf("%d%d%d", &a, &b, &c);

	int max;
	max = (a > b) ? max : b;
	max = (max > c) ? max : c;

	printf("�ִ밪:%d", max);
}
//*/


int main() {
	double cm, pit, inch;
	//int cm, pit, inch;
	printf("Ű�� �Է��ϼ���(cm):");
	scanf("%lf", &cm);

	inch = cm / 2.54;
	pit = inch / 12;


	printf("%lfcm�� %lf��Ʈ %lf��ġ �Դϴ�.\n", cm, pit, inch);
}
//*/

/*
int main() {
	int num, a, b;
	printf("������ �Է��ϼ���:");
	scanf("%d", &num);
	
	a = num / 10;
	b = num % 10;

	printf("���� �ڸ�:%d\n", a);
	printf("���� �ڸ�:%d\n", b);
}
//*/

/*
int main() {
	int num, result;
	printf("������ �Է��ϼ���:");
	scanf("%d", &num);

	result = ~num + 0x00000001;

	printf("2�� ����:%d\n", result);
}
//*/

/*
int main() {
	int x, y, result;
	printf("������ �Է��ϼ���:");
	scanf("%d", &x);
	printf("2�� ���ϰ� ���� Ƚ��:");
	scanf("%d", &y);

	result = x << y;

	printf("%d<<%d�� ��:%d\n", x, y, result);
}
//*/


