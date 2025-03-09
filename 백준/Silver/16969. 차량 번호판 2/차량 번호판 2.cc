#include <iostream>
using namespace std;

int main() {
	long long cnt = 1;
	string str;

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'c')
			cnt *= (i > 0 && str[i - 1] == 'c') ? 25 : 26;
		else 
			cnt *= (i > 0 && str[i - 1] == 'd') ? 9 : 10;

		cnt %= 1000000009;
	}
	cout << cnt;
	return 0;
}