#include <stdio.h>

/*
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
		return x * y;
}
int main() {
	int num;
	int x = 10, y = 20;
	int (*p[3])() = { add, sub, mul };

	printf("\n==============================\n");
	printf("0. ����\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("0, 1, 2 �� ���ϴ� ���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);

	printf("%d \n", p[num](x, y));
	/*
	if (num == 0) {
		printf("%d + %d = %d\n", x, y, add(&x, &y));
	}
	else if (num == 1) {
		printf("%d - %d = %d\n", x, y, sub(&x, &y));
	}
	else if (num == 2) {
		printf("%d x %d = %d\n", x, y, mul(&x, &y));
	}
	
	return 0;
}

*/