#include<stdio.h>


void array_copy(int* A, int* B, int size) {
	
	printf("A[ ] = ");
	for (int i = 0; i < size; i++) {
		A[i] = ++ (* A);		//1 บฮลอ
		printf("%d ", A[i]);	//A[0] ...... A[9] 
		
	}
	printf("%d",A[0]);
	printf("\n");
	printf("B[ ] = ");
	for (int i = 0; i < size; i++) {
		B[i] = A[i];	// A[0] = 10?
		printf("%d ", B[i]);
	}
	printf("\n");
}

int main() {

	int a[10] = { 0 };
	int b[10] = { 0 };

	array_copy(a, b, sizeof(a) / sizeof(a[0]));
}