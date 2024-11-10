#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
int main() {
	int a, b, c, d, e, f, X = 0, Y = 0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	for (int x = -999; x < 1000; x++) {
		for (int y = -999; y < 1000; y++) {
			if (a * x + b * y == c && d * x + e * y == f) {
				X = x;
				Y = y;
			}
		}
	}
	printf("%d %d", X, Y);
	return 0;
}