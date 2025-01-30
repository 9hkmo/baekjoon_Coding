#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K, count = 0, num, index;
	vector<int> coin;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> num;
		coin.push_back(num);
	}

	index = N - 1;
	while (K > 0) {
		if (K < coin[index]) {
			index--;
			continue;
		}
		K -= coin[index];
		count++;
	}

	cout << count;

	return 0;
}