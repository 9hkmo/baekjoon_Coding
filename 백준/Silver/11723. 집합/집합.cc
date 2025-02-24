#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, x;
    bool S[21] = { 0, };
    string cmd;
    cin >> M;

    while (M--) {
        cin >> cmd;
        if (cmd == "all") 
            for (int i = 1; i <= 20; i++) 
                S[i] = 1;           
        else if (cmd == "empty") 
            for (int i = 1; i <= 20; i++) 
                S[i] = 0;
        else {
            cin >> x;
            if (cmd == "add") S[x] = 1;
            else if (cmd == "remove") S[x] = 0;
            else if (cmd == "check") cout << S[x] << '\n';
            else if (cmd == "toggle") S[x] = S[x] ? 0 : 1;
        }
    }
    return 0;
}