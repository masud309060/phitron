#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n; string s;
        cin >> n >> s;

        map<char, int> mp;
        for (int i = 0; i < n; i++) mp[s[i]] = 1;

        string r;
        for(auto [x, y]: mp) r.push_back(x);

        map<char, char> r_map;
        for (int i = 0, j = r.size() - 1; i < r.size(); i++, j--)
        {
            r_map[r[i]] = r[j];
        }

        string ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(r_map[s[i]]);
        }
        
        cout << ans << endl;        
    }
    
    return 0;
}