#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K, count = 0, coin;
	vector<int> coins;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> coin;
		coins.push_back(coin);
	}

	for (int i = N - 1; K > 0; i--) {
		if (K >= coins[i]) {
			count += K / coins[i];
			K %= coins[i];
		}
	}

	cout << count;
	return 0;
}