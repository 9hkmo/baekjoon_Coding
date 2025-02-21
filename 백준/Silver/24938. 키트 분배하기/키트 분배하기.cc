#include <iostream>
using namespace std;

int main() {
	int N, A[100], i, j, avr = 0, cnt = 0;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> A[i];
		avr += A[i];
	}
	avr /= N;
	for (int i = 0; i < N; i++) {
		if (A[i] >= avr) {
			A[i + 1] += A[i] - avr;
			cnt += A[i] - avr;
			A[i] = avr;
		}
		else {
			for (int j = i + 1; A[i] != avr; j++) {
				if (A[i] + A[j] >= avr) {
					A[j] -= avr - A[i];
					cnt += (j - i) * (avr - A[i]);
					A[i] = avr;
					break;
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