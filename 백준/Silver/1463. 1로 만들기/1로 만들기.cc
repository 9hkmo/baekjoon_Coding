#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector <int> dp(N + 4);
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= N; i++) {
		if (i % 3 == 0 && i % 2 == 0)
			dp[i] = min({ dp[i / 3] + 1 , dp[i / 2] + 1, dp[i - 1] + 1 });
		else if (i % 3 == 0) dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
		else if (i % 2 == 0) dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
		else dp[i] = dp[i - 1] + 1;
	}
	cout << dp[N];
	return 0;
}