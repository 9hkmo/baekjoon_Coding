#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

long long int f(int a, int b) {
	int r = a % b;
	if (r == 0) return b;
	return f(b, r);
}

int main() {
	long long int A, B;
	scanf("%lld %lld", &A, &B);
	printf("%lld\n", A * B / f(A, B));

	return 0;
}