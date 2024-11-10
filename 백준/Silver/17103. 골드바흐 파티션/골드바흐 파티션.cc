#include <stdio.h>

int arr[1000001] = { 0, };
int main() {
	int i, j, n, cnt, T;

	for (i = 2; i <= 1000000; i++) arr[i] = 1;
	for (i = 2; i <= 1000000; i++)
		for (j = 2 * i; j <= 1000000; j += i)
			arr[j] = 0;

	scanf("%d", &T);
	while(T--) {
		scanf("%d", &n);
		cnt = 0;
		for (i = 2; i <= n / 2; i++) {
			if (2 == arr[n - i] + arr[i]) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}