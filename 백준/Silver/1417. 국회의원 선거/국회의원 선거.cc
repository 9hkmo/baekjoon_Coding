#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N, M, dasom, top_vote, vote = 0;
	priority_queue<int> votes;

	cin >> N >> dasom;
	while (--N) {
		cin >> M;
		votes.push(M);
	}

	while (!votes.empty() && dasom <= votes.top()) {
		top_vote = votes.top();
		votes.pop();
		dasom++;
		vote++;
		top_vote--;
		votes.push(top_vote);
	}

	cout << vote;
	return 0;
}