#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int main() {
	// 1 = ����, 2 = ����, 3 = ��
	srand(time(0));
	char *cum[] = { "����", "����", "��"};

	while (1) {
		char* man[] = { "����", "����", "��" };
		int a;
		printf("����(1), ����(2), ��(3) �Է�>");
		scanf("%d", &a);
		
		int b = rand() % 3;
		
		if (man[a-1] == cum[b]) {
			printf("��� : %s, ��ǻ�� : %s\n", man[a - 1], cum[b]);
			printf("���\n");
		}
		else if (man[a-1] == "����" && cum[b] == "��") {
			printf("��� : %s, ��ǻ�� : %s\n", man[a - 1], cum[b]);
			printf("��� ��\n");
		}
		else if (man[a - 1] == "����" && cum[b] == "����") {
			printf("��� : %s, ��ǻ�� : %s\n", man[a - 1], cum[b]);
			printf("��ǻ�� ��\n");
		}
		else if (man[a - 1] == "����" && cum[b] == "����") {
			printf("��� : %s, ��ǻ�� : %s\n", man[a - 1], cum[b]);
			printf("��� ��\n");
		}
		else if (man[a - 1] == "����" && cum[b] == "��") {
			printf("��� : %s, ��ǻ�� : %s\n", man[a - 1], cum[b]);
			printf("��ǻ�� ��\n");
		}
		else if (man[a - 1] == "��" && cum[b] == "����") {
			printf("��� : %s, ��ǻ�� : %s\n", man[a - 1], cum[b]);
			printf("��ǻ�� ��\n");
		}
		else {
			printf("��� : %s, ��ǻ�� : %s\n", man[a - 1], cum[b]);
			printf("��� ��\n");
		}
	}
	
}
*/
/*
int main() {
	char user[10];
	char com[][10] = { "����", "����", "��" };

	while (1) {
		printf("����(1), ����(2), ��(3) �Է�:");
		scanf("%s", user);

		int comNum = rand() % 3;

		if (strcmp(com[comNum], "����") == 0) {
			if (strcmp(user, "����") == 0) {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("���\n");
			}
			else if (strcmp(user, "����") == 0) {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("����� ��\n");
			}
			else {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("��ǻ�� ��\n");
			}
		}
		else if (strcmp(com[comNum], "����") == 0)
		{
			if (strcmp(user, "����") == 0) {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("��ǻ�� ��\n");
			}
			else if (strcmp(user, "����") == 0) {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("���\n");
			}
			else {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("��� ��\n");
			}
		}
		else
		{
			if (strcmp(user, "����") == 0) {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("��� ��\n");
			}
			else if (strcmp(user, "����") == 0) {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("��ǻ�� ��\n");
			}
			else {
				printf("��ǻ�� : %s, ����� : %s\n", com[comNum], user);
				printf("���\n");
			}
		}
	}
}
*/