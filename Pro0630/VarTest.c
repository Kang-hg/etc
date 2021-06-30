#include<stdio.h>

/*
void inc() {
	static int x = 0;
	x++;
	printf("X= %d\n", x);
}
int main() {
	
	for (int i = 0; i < 5; i++)
		inc();

	return 0;
}
*/

/*
int x;
void sub();
int main() {

	for (x = 0; x < 10; x++) {		//아래 sub함수에서 이미 x=10 이므로 처음 1번만 출력
		sub();
		printf("\n");
	}
		
}
void sub() {
	
	for (x = 0; x < 10; x++)
		printf("*");
}

*/