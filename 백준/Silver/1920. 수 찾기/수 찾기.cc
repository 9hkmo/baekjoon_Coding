#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int binary_Search(vector<int> array, int key, int low, int high) {
//    int mid;
//    while (low <= high) {
//        mid = (low + high) / 2;
//        if (key == array[mid]) return 1;
//        else if (key < array[mid]) high = mid - 1;
//        else if (key > array[mid]) low = mid + 1;
//    }
//    return 0;
//}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, N, M, temp;
    cin >> N;

    vector<int> array(N);

    for (i = 0; i < N; i++) 
        cin >> array[i];
    
    sort(array.begin(), array.end());

    cin >> M;
    for (i = 0; i < M; i++) {
        cin >> temp;
        //cout << binary_search(array.begin(), array.end(), temp) << endl;
        if (binary_search(array.begin(), array.end(), temp)) {
            cout << "1" << "\n";
        }
        else cout << "0" << "\n";
    }

    return 0;
}