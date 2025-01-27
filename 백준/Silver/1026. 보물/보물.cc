#include <iostream>
#include <vector>	
#include <algorithm>
using namespace std;

bool compare(int x, int y) {
	return x < y;
}

int main() {
	int N, num, minS = 0;
	cin >> N;
	vector<int> A, B;
	for (int i = 0; i < N; i++) {
		cin >> num;
		A.push_back(num);
	}
	for (int i = 0; i < N; i++) {
		cin >> num;
		B.push_back(num);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), compare);

	for (int i = 0; i < N; i++) {
		minS += A[i] * B[N - 1 - i];
	}
	cout << minS;
	return 0;
}