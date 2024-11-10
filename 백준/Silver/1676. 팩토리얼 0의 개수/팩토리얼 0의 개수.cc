#include <stdio.h>

int main(){
	int N, sum=1, x=0;
	scanf("%d", &N);
	for (int i = 2; i <= N; i++) {
		sum *= i;
		while (sum % 10 == 0) {
			x++;
			sum /= 10;
		}
		sum %= 1000;
	}
	printf("%d\n", x);
	return 0;
}