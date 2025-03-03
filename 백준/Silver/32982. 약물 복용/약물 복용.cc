#include <iostream>
using namespace std;

typedef struct Time {
    int start, end;
}Time;

int main() {
    int N, K, i, j, temp;
    Time A[3];
    cin >> N >> K;
    for (i = 0; i < 3; i++) cin >> A[i].start >> A[i].end;
    temp = A[0].end;

    for (i = 0; i < N; i++) {
        for (j = 0; j < 2; j++) {
            if (temp + K < A[j+1].start) {
                cout << "NO";
                return 0;
            }
            temp = min(temp + K, A[j + 1].end);
        }

        if (i < N - 1) {
            if (temp + K < A[0].start + 1440) {
                cout << "NO";
                return 0;
            }
            temp = min((temp + K) % 1440,A[0].end);
        }
    }
    cout << "YES";
    return 0;
}