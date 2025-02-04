#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, i, box, weight;
	cin >> N >> M;
	vector<int> books(N);

	for (i = 0; i < N; i++) 
		cin >> books[i];

	i = box = 0;
	while (i < N) {
		weight = M;
		while (i < N && weight >= books[i])
			weight -= books[i++];
		box++;
	}

	cout << box;
	return 0;
}
