#include <iostream>
using namespace std;

typedef struct Time {
    int start, end;
}Time;

int main() {
    int N, K, i, temp;
    Time A[3];
    cin >> N >> K;
    for (i = 0; i < 3; i++) cin >> A[i].start >> A[i].end;
    temp = A[0].end;

    for (i = 0; i < N; i++) {
        if (temp + K < A[1].start) {
            cout << "NO";
            return 0;
        }
        temp = temp + K < A[1].end ? temp + K : A[1].end;

        if (temp + K < A[2].start) {
            cout << "NO";
            return 0;
        }
        temp = temp + K < A[2].end ? temp + K : A[2].end;

        if (i < N - 1) {
            if (temp + K < A[0].start + 1440) {
                cout << "NO";
                return 0;
            }
            temp = (temp + K) % 1440 < A[0].end ? (temp + K) % 1440 : A[0].end;
        }
    }
    cout << "YES";
    return 0;
}