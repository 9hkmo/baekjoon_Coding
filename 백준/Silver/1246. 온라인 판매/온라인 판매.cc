#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}
int main() {
	int N, M, i, A, total, cnt;
	
	cin >> N >> M;
	vector<int> P(M);

	for (i = 0; i < M; i++) 
		cin >> P[i];
	sort(P.begin(), P.end(), compare);
	
	for (i = total = 0; i < M; i++) {
		cnt = min(N, i + 1);
		if (total < P[i] * cnt) {
			total = P[i] * cnt;
			A = P[i];
		}
	}

	cout << A << " " << total;
	return 0;
}