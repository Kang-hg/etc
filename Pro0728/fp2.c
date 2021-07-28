#include <stdio.h>

/*
void menu();
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

void menu() {
	printf("=====================\n");
	printf("1. µ¡¼À\n");
	printf("2. »¬¼À\n");
	printf("3. °ö¼À\n");
	printf("4. ³ª´°¼À\n");
	printf("5. Á¾·á\n");
	printf("=====================\n");
}

int main() {
	int ans, result, x, y;
	int (*pf[4])(int, int) = { add, sub, mul, div };

	while (1)
	{
		menu();
		printf("¸Þ´º¸¦ ¼±ÅÃÇÏ¼¼¿ä: ");
		scanf("%d", &ans);

		if (ans < 1 || ans > 5)
		{
			printf("´Ù½Ã ¼±ÅÃÇÏ¼¼¿ä\n\n");
			continue;
		}
		if (ans == 5)
		{
			break;
		}

		printf("2°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
		scanf("%d%d", &x, &y);

		result = pf[ans - 1](x, y);

		printf("¿¬»ê °á°ú = %d\n\n", result);
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
