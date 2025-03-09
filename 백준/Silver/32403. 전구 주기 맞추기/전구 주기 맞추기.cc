#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, T, a, cnt = 0, i, min;
	vector<int> gcd;
	cin >> N >> T;
	for (i = 1; i <= T; i++) 
		if (T % i == 0) 
			gcd.push_back(i);

	while (N--) {
		cin >> a;
		if (T < a) cnt += a - T;
		else if (T % a == 0) continue;
		else {
			min = 1000;
			for (i = 0; i < gcd.size(); i++) 
				if (abs(gcd[i] - a) < min) 
					min = abs(gcd[i] - a);
			cnt += min;
		}
	}
	cout << cnt;
	return 0;
}