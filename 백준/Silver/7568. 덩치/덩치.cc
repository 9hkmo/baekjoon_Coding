#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef struct Size {
    int x;
    int y;
} Size;
int visited[50];
int main() {
    int N;
    cin >> N;
    vector<Size> big;

    for (int i = 0; i < N; i++) {
        Size temp;
        cin >> temp.x >> temp.y;
        big.push_back(temp);
    }

    int rank;
    for (int i = 0; i < N; i++) {
        rank = 1;
        
        for (int j = 0; j < N; j++) {
            if (i != j) {
                if (big[i].x < big[j].x && big[i].y < big[j].y) {
                    rank++;
                }
            }
        }

        cout << rank << " ";
    }

    return 0;
}