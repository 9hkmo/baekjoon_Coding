#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct element {
	int key;
	char word[51];
}element;

typedef struct heapType {
	element* heap;
	int heap_size;
}heapType;

int cmp(element a, element b) {
	if ((a.key == b.key) && (strcmp(a.word, b.word) < 0) || b.key > a.key)
		return 1;
	else return 0;
}

void insert_min_heap(heapType* h, element item) {
	int i = ++(h->heap_size);

	while (i != 1 && cmp(item, h->heap[i/2])) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;
}

element delete_min_heap(heapType* h) {
	int p=1, c=2;
	element item = h->heap[1], temp = h->heap[(h->heap_size)--];
	while (c <= h->heap_size) {
		if (c < h->heap_size && cmp(h->heap[c+1], h->heap[c]))
			c++;
		if (cmp(temp, h->heap[c])) break;
		h->heap[p] = h->heap[c];
		p = c;
		c *= 2;
	}
	h->heap[p] = temp;
	return item;
}

int main() {
	int i, N;
	element x, px;
	heapType* h = (heapType*)malloc(sizeof(heapType));
	scanf("%d", &N);
	
	h->heap_size = 0;
	h->heap = (element*)malloc(sizeof(element) * (N + 1));

	for (i = 0; i < N; i++) {
		scanf("%s", x.word);
		x.key = strlen(x.word);
		insert_min_heap(h, x);
	}
	
	px = delete_min_heap(h);
	printf("%s\n", px.word);
	while(N--) {
		x = delete_min_heap(h);
		if (strcmp(px.word, x.word) == 0) continue;
		printf("%s\n", x.word);
		px = x;
	}

	return 0;
}