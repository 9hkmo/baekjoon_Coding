#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main() {
	int T, N[1000] = { 0, }, i = 0, j, cnt=0,min = 1001;
	scanf("%d", &T);
	while (T != i) {
		scanf("%d", &N[i++]);
		if (min > N[i - 1])min = N[i - 1];
	}
	for (i = min; cnt != T; i++) {
		for (j = 0; j < T; j++) {
			if (N[j] == i) {
				printf("%d\n", N[j]);
				cnt++;
				break;
			}
		}
	}
	return 0;
}