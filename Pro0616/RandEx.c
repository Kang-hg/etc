#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
int main() {
	srand(time(0));
	printf("����: %d %d \n", rand()%100,rand()%10);
	return 0;
}
//*/

/*
int main() {
	int n1, n2, n3, n4, sum;
	srand(time(0));
	printf("\n%d ", n1 = 1 - (rand() % 10) / 6);
	printf("%d ", n2 = 1 - (rand() % 10) / 6);
	printf("%d ", n3 = 1 - (rand() % 10) / 6);
	printf("%d\n", n4 = 1 - (rand() % 10) / 6);

	if (n1 == 0)
		printf("O");
	else
		printf("X");
	if (n2 == 0)
		printf("O");
	else
		printf("X");
	if (n3 == 0)
		printf("O");
	else
		printf("X");
	if (n4 == 0)
		printf("O");
	else
		printf("X");

	sum = n1 + n2 + n3 + n4;

	if (sum == 4)
		printf(": ��\n");
	else
		if (sum == 3)
			printf(": ��\n");
		else
			if (sum == 2)
				printf(": ��\n");
			else
				if (sum == 1 && n1 == 1)
					printf(": �޵�\n");
				else
					if (sum == 1)
						printf(": ��\n");
					else
						printf(": ��\n");

}
//*/