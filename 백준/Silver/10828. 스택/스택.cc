#include <stdio.h>
#include<string.h>
int stack[10001] = { 0, }, top = 0;

int main() {
	char cmd[6] = { 0, };
	int N, X;
	scanf("%d", &N);
	while (N--) {
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &X);
			stack[top++] = X;
		}
		else if (strcmp(cmd, "pop") == 0) {
			if (top == 0) printf("-1\n");
			else printf("%d\n", stack[--top]);
		}
		else if (strcmp(cmd, "size") == 0) {
			printf("%d\n", top);
		}
		else if (strcmp(cmd, "empty") == 0) {
			if (top == 0)printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(cmd, "top") == 0) {
			if (top == 0) printf("-1\n");
			else printf("%d\n", stack[top - 1]);
		}
	}
	return 0;
}