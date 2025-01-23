#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, item, sum = 0;
	vector<int> P;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> item;
		P.push_back(item);
	}
	sort(P.begin(), P.end());
	
	for (int i = 0; i < N; i++) 
		for (int j = 0; j <= i; j++) 
			sum += P[j];

	cout << sum;
	return 0;
}