#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int sum=0, cnt=0;
	while (1) {
		if (n % 5 == 0) {
			cnt += n / 5;
			break;
		}
		else {
			if ((n - 5) % 3 == 0) {
				n -= 5;
				cnt++;
			}
			else if ((n-3) % 5 == 0) {
				cnt+= 1 + (n-3)/5;
				break;
			}
			else {
				n -= 3;
				if (n < 0) {
					cnt = -1;
					break;
				}
				cnt++;
			}
		}
	}
	
	printf("%d", cnt);

	return 0;
}