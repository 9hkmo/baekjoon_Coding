#include <iostream>
using namespace std;

int main() {
    string L, R;
    int cnt = 0;
    cin >> L >> R;
    if (L.size() == R.size()) {
        for (int i = 0; i < L.size(); i++) {
            if (L[i] == '8' && L[i] == R[i]) cnt++;
            else if(L[i] != R[i]) break;
        }
    }
    cout << cnt;
    
    return 0;
}
