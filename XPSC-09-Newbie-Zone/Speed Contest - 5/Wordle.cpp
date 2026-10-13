#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--)
    {
        string s, t;
        cin >> s >> t;
        int len = 5;

        string ans = "";
        for (int i = 0; i < len; i++)
        {
            if(s[i] == t[i]) {
                ans += 'G';
            } else {
                ans += 'B';
            }
        }

        cout << ans << endl;
    }
    

    return 0;
}