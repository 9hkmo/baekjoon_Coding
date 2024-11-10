#include <stdio.h>
#include <stdlib.h>

int size = 0;
void insert(int list[], int item) {
	int i = ++size;
	while (i != 1 && list[i / 2] > item) {
		list[i] = list[i / 2];
		i /= 2;
	}
	list[i] = item;
}

int delete_min(int list[]) {
	int p = 1, c = 2, item = list[1], temp = list[size--];
	while (c <= size) {
		if (c<size && list[c] > list[c + 1]) c++;
		if (list[c] > temp) break;
		list[p] = list[c];
		p = c;
		c *= 2;
	}
	list[p] = temp;
	return item;
}

int main(){
	int i, x, N, * list;
	scanf("%d", &N);
	list = (int*)malloc(sizeof(int) * N);
	for(i=0; i<N; i++){
		scanf("%d", &x);
		insert(list, x);
	}
	for (i = 0; i < N; i++) {
		printf("%d\n", delete_min(list));
	}
	return 0;
}