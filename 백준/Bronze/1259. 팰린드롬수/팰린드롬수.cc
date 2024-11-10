#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	while (1) {
		char n[100000];
		int result = 1;
		scanf("%s", n);
		if (!(atoi(n))) break;
		for (int i = 0; i < strlen(n)/2; i++) {
				if (n[i] != n[strlen(n)-1 - i]){
					result = 0;
					break;
			}
		}
		if (result) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}