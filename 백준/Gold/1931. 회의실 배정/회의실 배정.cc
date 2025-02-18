#include <iostream>
#include <algorithm>
using namespace std;

typedef struct Time {
	int start, end;
}Time;

bool compare(Time a, Time b) {
	if (a.end == b.end) return a.start < b.start;
	return a.end < b.end;
}

int main() {
	int N, i, max_cnt, temp;
	cin >> N;

	Time* time = new Time[N];
	for (i = 0; i < N; i++) 
		cin >> time[i].start >> time[i].end;
	sort(time, time+N, compare);

	temp = time[0].end;
	for (i = max_cnt = 1; i < N; i++) {
		if (temp <= time[i].start) {
			temp = time[i].end;
			max_cnt++;
		}
	}

	cout << max_cnt;
	return 0;
}