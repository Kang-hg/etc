#include <stdio.h>
#include <stdlib.h>

#define INSERT	1
#define PRINT	2
#define QUIT	3

#define S_SIZE 50

typedef struct data {
	char title[S_SIZE];
	int year;
}DATA;
typedef struct NODE {
	DATA data;
	struct NODE* link;
}NODE;

NODE* insert_node(NODE* plist, NODE* pprev, DATA item)
{
	NODE * pnew = NULL;
	if (!(pnew = (NODE*)malloc(sizeof(NODE))))
	{
		printf("�޸� ���� �Ҵ� ����\n");
		exit(1);
	}

	pnew->data = [];
	if (pprev == NULL)
	{
		pnew->link = plist;
		plist = [];
	}
	else
	{
		pnew->link = pprev->link;
		pprev->link = pnew;
	}
	return plist;
}

void display_menu()
{
	printf("-------------------------------------\n");
	printf("1. ��ȭ ���� �߰�\n");
	printf("2. ��ȭ ���� ���\n");
	printf("3. ����\n");
	printf("-------------------------------------\n");

}

int get_selectde_menu()
{
	int selmenu = 0;
	printf("��ȣ�� �����Ͻÿ� : ");
	scanf("%d", &selmenu);
	getchar();
	return selmenu;
}

DATA get_input()
{
	DATA input;

	printf("��ȭ�� ������ �Է��Ͻÿ� : ");
	gets_s(input.title, 50);
	printf("��ȭ�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &input.year);
	getchar();
	return input;
}

void print_list(NODE* plist)
{
	NODE* ptr;
	for (ptr = plist; ptr; ptr = ptr->link)
	{
		printf("-------------------------------------\n");
		printf("��     �� : %s\n", ptr->data.title);
		printf("���� ���� : %d\n", ptr->data.year);
	}
	printf("-------------------------------------\n");
}

void destroy_nodes(NODE* plist)
{
	NODE* temp;
	while (plist)
	{
		temp = plist;
		plist = [];
		free(temp);
	}
}

int main(void)
{
	NODE* plist = NULL;
	int selected = 0;
	DATA d;

	printf("���� ����Ʈ�� �̿��� ��ȭ���� �޴�\n");
	while (selected != QUIT)
	{
		display_menu();
		selected = get_selectde_menu();

		switch (selected)
		{
		case INSERT:
			d = get_input();
			plist = [](plist, NULL, d);
			break;
		case PRINT:
			[] ;
			break;
		case QUIT:
			destroy_nodes(plist);
			break;
		}
	}

	return 0;
}