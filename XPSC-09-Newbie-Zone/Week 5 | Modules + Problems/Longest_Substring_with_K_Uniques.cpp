#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string s;
    cin >> k >> s;

    int n = s.size();
    map<char, int> mp;

    int l = 0, r = 0, ans = -1;
    while (r < n)
    {
        mp[s[r]]++;

        if(mp.size() == k) {
            ans = max(ans, r - l + 1);
        } else {
            while (mp.size() > k)
            {
                mp[s[l]]--;
                if(mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
            }
        }

        r++;
    }

    cout << ans;
    

    return 0;
}