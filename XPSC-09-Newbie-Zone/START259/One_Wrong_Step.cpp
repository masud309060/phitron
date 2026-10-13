#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 0, y = 0;
        for(auto ch: s) {
            if(ch == 'U') x++;
            if(ch == 'D') x--;
            if(ch == 'R') y++;
            if(ch == 'L') y--;
        }

        x = abs(x);
        y = abs(y);

        if((x == 2 && y == 0) || (x == 0 && y == 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    

    return 0;
}