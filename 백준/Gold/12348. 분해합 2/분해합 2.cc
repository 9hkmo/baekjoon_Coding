#include <iostream>
using namespace std;

int main() {
	long long N, i, sum, temp;
	int digit = 0;
	cin >> N;
	temp = N;
	while (temp) {
		temp /= 10;
		digit++;
	}

	i = N - (9 * digit) > 0 ? N - (9 * digit) : 1;
	for (; i < N; i++) {
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