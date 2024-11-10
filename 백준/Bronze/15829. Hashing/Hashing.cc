#include <stdio.h>
#define R 1234567891
int main() {
	int L;
	long long sum = 0, n = 1;
	char M[51];
	scanf("%d %s", &L, M);
	for (int i = 0; i < L; i++) {
		sum = (sum + (M[i] - 'a' + 1) * n) % R;
		n = (n * 31) % R;
	}
	printf("%lld", sum);
	return 0;
}