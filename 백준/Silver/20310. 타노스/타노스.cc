#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string S;
	cin >> S;
	int z, o;
	z = count(S.begin(), S.end(), '0') / 2;
	o = count(S.begin(), S.end(), '1') / 2;


	for (int i = 0; o; i++) {
		if (S[i] == '1') {
			o--;
			S.erase(i, 1);
		}
	}
	for (int i = S.length() - 1; z; i--) {
		if (S[i] == '0') {
			z--;
			S.erase(i, 1);
		}
	}
	cout << S;
	return 0;
}