#include <iostream>
using namespace std;

int main() {
	int i, j, N, tall, cnt, he[11] = {0,};

	cin >> N;

	for (i = 1; i <= N; i++) {
		cin >> tall;
		cnt = 0;
		for (j = 1; j <= N; j++) {
			if (he[j] == 0) {
				if (cnt == tall) {
					he[j] = i;
					break;
				}
				cnt++;
			}
		}
	}
	for (i = 1; i <= N; i++) cout << he[i] << " ";
	return 0;
}