#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, i, maxW;
	cin >> N;
	vector<int> rope(N);

	for (i = 0; i < N; i++) 
		cin >> rope[i];
	sort(rope.begin(), rope.end());
	for (i = maxW = 0; i < N; i++)
		if (maxW < rope[i] * (N - i))
			maxW = rope[i] * (N - i);

	cout << maxW;
	return 0;
}