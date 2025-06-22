#include <iostream>
#include <set>
using namespace std;

int main() {
    int i, N, M;
    string a;
    set<string> hs, hr;

    cin >> N >> M;
    for (i = 0; i < N; i++) {
        cin >> a;
        hs.insert(a);
    }

    for (i = 0; i < M; i++) {
        cin >> a;
        if (hs.find(a) != hs.end()) 
            hr.insert(a);
    }
    cout << hr.size() << "\n";
    for (string x : hr) 
        cout << x << "\n";

    return 0;
}