#include <stdio.h>

/*
void menu();
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu() {
	printf("=====================\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ����\n");
	printf("=====================\n");
}

int main() {
	int ans, result, x, y;
	int (*pf[4])(int, int) = { add, sub, mul, div };

	while (1)
	{
		menu();
		printf("�޴��� �����ϼ���: ");
		scanf("%d", &ans);

		if (ans < 1 || ans > 5)
		{
			printf("�ٽ� �����ϼ���\n\n");
			continue;
		}
		if (ans == 5)
		{
			break;
		}

		printf("2���� ������ �Է��ϼ���: ");
		scanf("%d%d", &x, &y);

		result = pf[ans - 1](x, y);

		printf("���� ��� = %d\n\n", result);
	}
}

int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
*/
