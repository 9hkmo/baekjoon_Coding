#define _CRT_SECURE_NO_WARNING
#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, M, sum, pre;
	int card[100] = { 0, };
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%d", &card[i]);
	
	sum = 0;
	for (int i = 0; i < N-2; i++) {	
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				pre = card[i] + card[j] + card[k];
				if (sum < pre && pre <= M)
					sum = pre;
			}
		}
	}
	printf("%d", sum);
	return 0;
}