#include <iostream>
#include <string>
using namespace std;

int main() {
	int cnt = 0;
	long long int temp;
	string N;
	cin >> N;
	while (atoll(N.c_str())) {
		if (N.find('1') != string::npos) {
			size_t pos = N.find('1');
			N.erase(pos, 1);
		}
		else {
			temp = atoll(N.c_str());
			temp--;
			N = to_string(temp);
		}
		cnt++;
	}

	cout << cnt;
	return 0;
}