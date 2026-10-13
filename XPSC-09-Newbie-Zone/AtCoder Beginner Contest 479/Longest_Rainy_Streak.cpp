#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0, ans = 0;

    for(char ch: s) {
        if(ch == 'R') {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 0;
        }
    }

    cout << ans;


    return 0;
}