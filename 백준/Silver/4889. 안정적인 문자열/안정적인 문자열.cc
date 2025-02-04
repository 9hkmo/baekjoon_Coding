#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int i, j, n, stack;

	for (i = 1;; i++) {
		stack = n = 0;
		cin >> str;
		if (str[0] == '-') break;

		for (j = 0; j < str.length(); j++) {
			if (str[j] == '{')
				stack++;
			else
				stack ? stack-- : (n++, stack++);
		}
		n += stack / 2;
		cout << i << ". " << n << endl;
	}
	return 0;
}
