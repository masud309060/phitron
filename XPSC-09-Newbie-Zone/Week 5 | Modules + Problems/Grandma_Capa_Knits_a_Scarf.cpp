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

        int ans = INT_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int l = 0, r = n - 1, change = 0;
            while (l < r)
            {
                if(s[l] !=  s[r]) {
                    if(ch == s[l]) {
                        l++;
                        change++;
                    } else if(ch == s[r]) {
                        r--;
                        change++;
                    } else {
                        change = INT_MAX;
                        break;
                    }
                } else {
                    l++;
                    r--;
                }
            }

            ans = min(ans, change);
        }

        if(ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
        
    }
    

    return 0;
}