#include <stdio.h>

int main() {
	int a, b, c, i;

	scanf("%d\n%d\n%d", &a, &b, &c);
	printf("%d\n", a + b - c);

	if (b < 10) i = 10;
	else if (b < 100) i = 100;
	else if (b < 1000) i = 1000;
	else i = 10000;
	printf("%d", a * i + b - c);
	return 0;
}