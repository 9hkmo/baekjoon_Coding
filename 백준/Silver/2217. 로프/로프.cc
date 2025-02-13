#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}
int main() {
	int N, i, maxW;
	cin >> N;
	vector<int> rope(N);

	for (i = 0; i < N; i++) 
		cin >> rope[i];
	sort(rope.begin(), rope.end(), compare);
	
	for (i = maxW = 0; i < N; i++) 
		if (maxW < rope[i] * (i + 1)) 
			maxW = rope[i] * (i + 1);

	cout << maxW;
	return 0;
}