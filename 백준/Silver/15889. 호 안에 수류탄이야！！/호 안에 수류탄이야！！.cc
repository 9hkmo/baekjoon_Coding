#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, a, i, fire = 0;
	vector<int> J, S;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> a;
		J.push_back(a);
	}
	for (i = 0; i < N-1; i++) {
		cin >> a;
		S.push_back(a);
	}
	for (i = 0; i < N - 1; i++) {
		if (fire < J[i]) break;
		fire = max(fire, J[i] + S[i]);
	}
	if (fire < J[J.size() - 1])
		cout << "엄마 나 전역 늦어질 것 같아";
	else
		cout << "권병장님, 중대장님이 찾으십니다";
	return 0;

}