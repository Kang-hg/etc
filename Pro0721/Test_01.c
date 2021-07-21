#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int main() {
	// 1 = 가위, 2 = 바위, 3 = 보
	srand(time(0));
	char *cum[] = { "가위", "바위", "보"};

	while (1) {
		char* man[] = { "가위", "바위", "보" };
		int a;
		printf("가위(1), 바위(2), 보(3) 입력>");
		scanf("%d", &a);
		
		int b = rand() % 3;
		
		if (man[a-1] == cum[b]) {
			printf("사람 : %s, 컴퓨터 : %s\n", man[a - 1], cum[b]);
			printf("비김\n");
		}
		else if (man[a-1] == "가위" && cum[b] == "보") {
			printf("사람 : %s, 컴퓨터 : %s\n", man[a - 1], cum[b]);
			printf("사람 승\n");
		}
		else if (man[a - 1] == "가위" && cum[b] == "바위") {
			printf("사람 : %s, 컴퓨터 : %s\n", man[a - 1], cum[b]);
			printf("컴퓨터 승\n");
		}
		else if (man[a - 1] == "바위" && cum[b] == "가위") {
			printf("사람 : %s, 컴퓨터 : %s\n", man[a - 1], cum[b]);
			printf("사람 승\n");
		}
		else if (man[a - 1] == "바위" && cum[b] == "보") {
			printf("사람 : %s, 컴퓨터 : %s\n", man[a - 1], cum[b]);
			printf("컴퓨터 승\n");
		}
		else if (man[a - 1] == "보" && cum[b] == "가위") {
			printf("사람 : %s, 컴퓨터 : %s\n", man[a - 1], cum[b]);
			printf("컴퓨터 승\n");
		}
		else {
			printf("사람 : %s, 컴퓨터 : %s\n", man[a - 1], cum[b]);
			printf("사람 승\n");
		}
	}
	
}
*/
/*
int main() {
	char user[10];
	char com[][10] = { "가위", "바위", "보" };

	while (1) {
		printf("가위(1), 바위(2), 보(3) 입력:");
		scanf("%s", user);

		int comNum = rand() % 3;

		if (strcmp(com[comNum], "가위") == 0) {
			if (strcmp(user, "가위") == 0) {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("비김\n");
			}
			else if (strcmp(user, "바위") == 0) {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("사용자 승\n");
			}
			else {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("컴퓨터 승\n");
			}
		}
		else if (strcmp(com[comNum], "바위") == 0)
		{
			if (strcmp(user, "가위") == 0) {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("컴퓨터 승\n");
			}
			else if (strcmp(user, "바위") == 0) {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("비김\n");
			}
			else {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("사람 승\n");
			}
		}
		else
		{
			if (strcmp(user, "가위") == 0) {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("사람 승\n");
			}
			else if (strcmp(user, "바위") == 0) {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("컴퓨터 승\n");
			}
			else {
				printf("컴퓨터 : %s, 사용자 : %s\n", com[comNum], user);
				printf("비김\n");
			}
		}
	}
}
*/