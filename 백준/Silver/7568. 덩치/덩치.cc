#include <iostream>
#include <vector>
using namespace std;

typedef struct Size {
    int x;
    int y;
} Size;

int main() {
    int N, rank = 1;
    cin >> N;
    vector<Size> big;

    for (int i = 0; i < N; i++) {
        Size temp;
        cin >> temp.x >> temp.y;
        big.push_back(temp);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            if (i != j && big[i].x < big[j].x && big[i].y < big[j].y)
                rank++;
        cout << rank << " ";
        rank = 1;
    }
    return 0;
}