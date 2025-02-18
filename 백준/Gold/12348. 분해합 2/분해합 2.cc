#include <iostream>
using namespace std;

int main() {
	long long N, i, sum, temp;
	cin >> N;

	for (i = N - 180; i < N; i++) {
		temp = sum = i;
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == N) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}