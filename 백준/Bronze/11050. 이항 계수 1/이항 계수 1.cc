#include <stdio.h>

int f(int n) {
	if (n <= 1) return 1;
	else return n * f(n - 1);
}

int main() {
	int N, K;
	scanf("%d%d", &N, &K);
	printf("%.0lf", (double)f(N) / (f(N - K) * f(K)));
	return 0;
}