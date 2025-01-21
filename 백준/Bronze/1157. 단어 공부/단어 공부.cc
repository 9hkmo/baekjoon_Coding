#include <stdio.h>
#include <string.h>
char A[1000005];
int main() {
	char a = 'A';
	int n[26] = { 0 }, size, max;
	scanf("%s", A);
	size = strlen(A);
	for (int i = 0; i < size; i++) {
		if (A[i] >= 'a') n[A[i] - 'a']++;
		else n[A[i] - 'A']++;
	}
	max = n[0];
	for (int i = 1; i < 26; i++) {
		if (max < n[i]) {
			max = n[i];
			a = 'A' + i;
		}
		else if (max == n[i]) {
			a = '?';
		}
	}
	printf("%c", a);
	return 0;
}