#include<stdio.h>

/*
int main() {
	int x, result;
	while(1){
		printf("x���� �Է��ϼ���:");
		scanf("%d", &x);

		if (x <= 0)
			result = x * x - 9 * x + 2;
		else
			result = 7 * x + 2;

		printf("f(x)�� ����: %d\n", result);

		printf("��� �Ͻðڽ��ϱ�?(����(999))=>");
		int cont;
		scanf("%d", &cont);

		if (cont == 999) break;
	}
	return 0;
}
//*/

/*
int main() {
	int x, hap = 0;
	int i = 1;
	while (1) {
		printf("������ ���� ���ұ��?");
		scanf("%d", &x);	//50

		while (i <= x) {
			hap = hap + i;
			i++;
		}
		printf("1���� %d������ ���� %d �Դϴ�.\n", x, hap);

		printf("��� �Ͻ÷��� �ƹ� ���ڳ� �Է��ϼ���.(����: -999)=>");
		int cont;
		scanf("%d", &cont);

		if (cont == -999) break;		//break�� �ݺ����� �������´�.
	}

	return 0;
}
//*/

/*
int main() {
	int x, oddHap = 0, evenHap = 0;
	int i = 1;
	while (1) {
		printf("������ ���� ���ұ��?");
		scanf("%d", &x);	//50

		while (i <= x) {
			if(i%2==1)
				oddHap += i;	//(x%2==0), !(x%2==0)
			else	
				evenHap += i;
			i++;
		}
		printf("1���� %d������ Ȧ������ %d �Դϴ�.\n", x, oddHap);
		printf("1���� %d������ ¦������ %d �Դϴ�.\n", x, evenHap);

		printf("��� �Ͻ÷��� �ƹ� ���ڳ� �Է��ϼ���.(����: -999)=>");
		int cont;
		scanf("%d", &cont);

		if (cont == -999) break;		//break�� �ݺ����� �������´�.
	}

	return 0;
}
//*/

/*
int main() {
	int i;
	printf("ī������ �ʱⰪ�� �Է��ϼ���:");
	scanf("%d", &i);
	
	while (i > 0) {
		printf("%d ", i);
		i--;

	}
	printf("\a\n");
}
//*/

/*
int main() {
	int i = 1, sum = 0, x;
	while (i<=100) {
		if (i % 3 == 0)
			sum += i;

		i++;
	}
	printf("1���� 100������ ��� 3�� ����� ���� %d�Դϴ�.\n", sum);
}
//*/

/*
int main() {	
	int i;	//a=��� = i%a==0
	printf("������ �Է��ϼ���:");
	scanf("%d", &i);

	int a = i;

	while (a > 0) {
		if (i % a == 0)
			printf("%d ", a);
			
		a--;
	}
}
//*/