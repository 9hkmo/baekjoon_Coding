#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, P, num, i;
	vector<int> A;
	cin >> P >> N;
	for (i = 0; i < N; i++) {
		cin >> num;
		A.push_back(num);
	}
	sort(A.begin(), A.end());

	for (i = 0; P < 200 && i < N; i++) 
		P += A[i];
	cout << i;
	
	return 0;
}