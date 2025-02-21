#include <iostream>
using namespace std;

int main() {
	long N, i, j, avr, cnt;

	cin >> N;
	long* A = new long[N];

	i = avr = cnt = 0;
	while (i < N) {
		cin >> A[i];
		avr += A[i++];
	}
	avr /= N;

	for (i = 0; i < N - 1; i++) {
		if (A[i] >= avr) {
			A[i + 1] += A[i] - avr;
			cnt += A[i] - avr;
			A[i] = avr;
		}
		else {
			for (j = i + 1; j < N && A[i] != avr; j++) {
				if (A[i] + A[j] >= avr) {
					A[j] -= avr - A[i];
					cnt += (j - i) * (avr - A[i]);
					A[i] = avr;
				}
				else {
					A[i] += A[j];
					cnt += (j - i) * A[j];
					A[j] = 0;
				}
			}
		}
	}
	
	cout << cnt;
	return 0;
}