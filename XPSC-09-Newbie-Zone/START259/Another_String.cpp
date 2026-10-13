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

        string s1, s2;
        cin >> s1 >> s2;

        int s1_1 = 0;
        int s2_1 = 0;

        for(auto ch: s1) {
            if(ch == '1') s1_1++;
        }

        for(auto ch: s2) {
            if(ch == '1') s2_1++;
        }

        s1_1 = s1_1 % 2;
        s2_1 = s2_1 % 2;

        // cout << s1_1 << " " << s2_1 << endl;

        if(s1_1 == s2_1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

    return 0;
}