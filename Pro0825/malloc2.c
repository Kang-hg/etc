#include <stdio.h>
#include <stdlib.h>

/*
int main() 
{
	int* list;
	int i, student;

	printf("학생의 수:");
	scanf("%d", &student);

	list = (int*)malloc(student * sizeof(int));
	if (list == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < student; i++)
	{
		printf("학생 #%d 성적: ", i + 1);
		scanf("%d", &list[i]);
	}
	printf("==================================\n");
	for (i = 0; i < student; i++)
	{
		printf("학생 #%d 성적:%d \n", i + 1, list[i]);
	}
	printf("==================================\n");
	free(list);
}

*/