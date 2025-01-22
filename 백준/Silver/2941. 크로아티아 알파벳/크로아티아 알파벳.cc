#include <stdio.h>
#include <string.h>
int main() {
	char sen[101];
	scanf("%s", &sen);
	int len = strlen(sen);
		for (int i = 0; i < strlen(sen); i++) {
			if (sen[i] == '=' || sen[i] == '-') len--;
			else if ((sen[i] == 'l' || sen[i] == 'n') && sen[i + 1] == 'j') len--;
			else if ((sen[i] == 'd' && sen[i + 1] == 'z') && sen[i + 2] == '=') len--;
	}
	printf("%d", len);
	return 0;
}