#include <stdio.h>
int main() {
	int N, i;
	scanf("%d", &N);

	for (i = 1; i < N; i++) {
		int sum = 0, p = i;
		while (p) { sum += p % 10; p /= 10; }
		if (sum + i == N) break;
	}
	printf("%d", i != N ? i : 0);
	return 0;
}