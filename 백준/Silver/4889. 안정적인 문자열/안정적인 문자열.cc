#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string str;
	int n;

	for (int i = 1; ; i++) {
		stack<char> S;
		n = 0;
		cin >> str;
		if (str[0] == '-') break;
		for (int j = 0; j < str.length(); j++) {
			if(str[j] == '{')
				S.push(str[j]);
			
			else if (str[j] == '}') {
				if (!S.empty())
					S.pop();
				else {
					S.push('{');
					n++;
				}
			}
		}
		n += S.size() / 2;
		cout << i << ". " << n << endl;
	}
	return 0;
}