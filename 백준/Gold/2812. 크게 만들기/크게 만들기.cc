#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K, i;
	string num;
	vector<char> result;

	cin >> N >> K >> num;
	for (i = 0; i < N; i++) {
		while (K != 0 && !result.empty() && result.back() < num[i]) {
			result.pop_back();
			K--;
		}
		result.push_back(num[i]);
	}

	while (K--) {
		result.pop_back();
	}

	for (i = 0; i < result.size(); i++)
		cout << result[i];

	return 0;
}