#include<stdio.h>
#include<stdlib.h>


/*
int main() {
	int num;
	printf("�ݺ� Ƚ��:");
	scanf("%d", &num);

	double divident, sum;
	divident = 4.0;
	sum = 0.0;

	int j = 2;
	for (double i = 1; i <= num; i += 2) {
		if (j % 2 == 0)
			sum = sum + divident / i;
		else
			sum = sum - divident / i;
		j++;
	}
	printf("������ = %lf\n", sum);
	
}
//*/

/*
int main() {
	int num;
	printf("�ݺ� Ƚ��:");
	scanf("%d", &num);

	double bunja, bunmo, sum;
	bunja = 4.0;
	bunmo = 1.0;
	sum = 0.0;

	while (num > 0) {
		sum = sum + bunja / bunmo;
		bunja = -1.0 * bunja;
		bunmo += 2;
		num--;
	}
	printf("������ = %lf\n", sum);

}
//*/

/*
int main() {
	int x, y, sum;
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		x = (rand() % 10) + 1;

	}
}
//*/

/*
int main() {
	int num;
	printf("������ �Է��ϼ���:");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}
}
//*/

/*
int main() {
	int a[] = { 10,20,30,40,50 };
	/*
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;
	
	
	for (int i = 0; i < 5; i++0) {
		a[i] = i;
	}
	
	
	printf("%d %d %d\n", a[0], &a[0], a);
	printf("%d %d %d\n", &a[0] + 2, a + 2, &a[2]);
	printf("%d %d %d\n", *a, *(a+1),*(a+2));
	return 0;
}
//*/

/*
#define size 6
int main() {
	srand(time(0));
	int n[size] = { 0 };
	int num;
	printf("�ֻ����� ���� ���ڸ� �Է�:");
	scanf("%d", &num);
	int i;
	for (i = 0; i < num; i++)
		++n[rand() % 6];

	printf("\n �� ���ڰ� ���� Ȯ��\n");
	printf("************************\n");

	for(i=0;i<size;i++)
		printf(" %d\t%d\n", i + 1, n[i]);
}
//*/

/*
#define size 10
int main() {
	char ans1;
	int ans2,ans3, i;
	int seats[size] = { 0 };

	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n):");
		scanf(" %c", &ans1);

		if (ans1 == 'n')
			break;
		printf("--------------------------------------\n");
		printf(" 1  2  3  4  5  6  7  8  9  10\n");
		printf("--------------------------------------\n");

		for (i = 0; i < size; i++)
			printf(" %d ", seats[i]);
		printf("\n");

		printf("�� ��° �¼��� �����Ͻðڽ��ϱ�? ");
		scanf("%d%d", &ans2, &ans3);
		if (seats[ans2 - 1] == 0&&seats[ans3-1]==0) {
			seats[ans2 - 1] = 1;
			seats[ans3 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�̹� ����� �ڸ��Դϴ�.\n");
	}
}
//*/

/*
#define size 10
int main() {
	int prices[size] = { 0 };
	int i, min;
	srand(time(0));

	printf("==============================================================================\n");
	printf(" 1\t 2\t 3\t 4\t 5\t 6\t 7\t 8\t 9\t 10 \n");
	printf("==============================================================================\n");

	for (i = 0; i < size; i++) {
		prices[i] = (rand() % 100) + 1;
		printf(" %d\t", prices[i]);
	}
	printf("\n\n");
	min = prices[0];
	for (i = 1; i < size; i++) {
		if (prices[i] < min)
			min = prices[i];
	}
	printf("�ּҰ��� %d �Դϴ�.\n", min);
	return 0;
}
//*/

/*
int main() {
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < 12; i++)
		printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", i + 1, days[i]);
	return 0;
}
//*/


