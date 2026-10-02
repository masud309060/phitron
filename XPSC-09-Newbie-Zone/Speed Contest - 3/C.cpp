#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        
        for (int i = n - 1; i > 0; i--)
        {
            if(k == 0) break;
            if(s[i] == '1' && s[i - 1] == '0') {
                s[i - 1] = '1';
                k--;
            }
        }

        int ans = 0;
        for(char x: s) {
            if(x == '1') ans++;
        }

        cout << ans << endl;
        
    }
    

    return 0;
}