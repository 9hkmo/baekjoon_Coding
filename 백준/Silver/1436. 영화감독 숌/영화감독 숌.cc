#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main() {
	int n, count=0, jong = 666;

	scanf("%d", &n);
	while (count != n) {
		int c = jong;
		while (c) {
			if (c % 1000 == 666) {
				count++;
				break;
			}
			c /= 10;
		}
		jong++;
	}
	printf("%d\n", jong-1);
	return 0;
}