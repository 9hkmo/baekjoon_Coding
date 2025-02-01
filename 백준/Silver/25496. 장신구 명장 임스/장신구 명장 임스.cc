#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, P, num, max;
	vector<int> A;
	cin >> P >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		A.push_back(num);
	}
	sort(A.begin(), A.end());

	max = 0;
	for (int i = 0; P < 200 && i < N; i++) {
		P += A[i];
		max++;
	}
	cout << max;
	
	return 0;
}