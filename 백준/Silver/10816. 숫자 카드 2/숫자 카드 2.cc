#include <iostream>
using namespace std;

int arr[20000001] = { 0, };

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M, num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num < 0)
			arr[abs(num)+10000000]++;
		else
			arr[num]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		if (num < 0)
			cout << arr[abs(num)+ 10000000] << " ";
		else
			cout << arr[num] << " ";
	}

	return 0;
}