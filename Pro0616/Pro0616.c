#include<stdio.h>

/*
int main() {
	int x, result;
	while(1){
		printf("x값을 입력하세요:");
		scanf("%d", &x);

		if (x <= 0)
			result = x * x - 9 * x + 2;
		else
			result = 7 * x + 2;

		printf("f(x)의 값은: %d\n", result);

		printf("계속 하시겠습니까?(중지(999))=>");
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
		printf("어디까지 합을 구할까요?");
		scanf("%d", &x);	//50

		while (i <= x) {
			hap = hap + i;
			i++;
		}
		printf("1부터 %d까지의 합은 %d 입니다.\n", x, hap);

		printf("계속 하시려면 아무 숫자나 입력하세요.(중지: -999)=>");
		int cont;
		scanf("%d", &cont);

		if (cont == -999) break;		//break시 반복문을 빠져나온다.
	}

	return 0;
}
//*/

/*
int main() {
	int x, oddHap = 0, evenHap = 0;
	int i = 1;
	while (1) {
		printf("어디까지 합을 구할까요?");
		scanf("%d", &x);	//50

		while (i <= x) {
			if(i%2==1)
				oddHap += i;	//(x%2==0), !(x%2==0)
			else	
				evenHap += i;
			i++;
		}
		printf("1부터 %d까지의 홀수합은 %d 입니다.\n", x, oddHap);
		printf("1부터 %d까지의 짝수합은 %d 입니다.\n", x, evenHap);

		printf("계속 하시려면 아무 숫자나 입력하세요.(중지: -999)=>");
		int cont;
		scanf("%d", &cont);

		if (cont == -999) break;		//break시 반복문을 빠져나온다.
	}

	return 0;
}
//*/

/*
int main() {
	int i;
	printf("카운터의 초기값을 입력하세요:");
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
	printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.\n", sum);
}
//*/

/*
int main() {	
	int i;	//a=약수 = i%a==0
	printf("정수를 입력하세요:");
	scanf("%d", &i);

	int a = i;

	while (a > 0) {
		if (i % a == 0)
			printf("%d ", a);
			
		a--;
	}
}
//*/