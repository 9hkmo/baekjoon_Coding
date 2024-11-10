#include <stdio.h>

int main() {
	int c=0, i, a, n, k, Q[1001];
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) {
		Q[i] = i;
	}

	printf("<");
	for (i = k, a = 0; a < n - 1; a++, c = 0) {
		printf("%d, ", Q[i]);
		Q[i] = 0;
		while (c < k) {
			i++;
			if (i % (n + 1) == 0) i = 1;
			c++;
			if (!Q[i]) c--;
		}
	}
	printf("%d>", Q[i]);
	return 0;
}