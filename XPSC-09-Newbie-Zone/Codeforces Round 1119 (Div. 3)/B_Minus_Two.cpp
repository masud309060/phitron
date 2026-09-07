#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x = abs(x - 2);
            
            auto it = mp.find(x);
            if(it == mp.end()) {
                mp[x] = 1;
            } else {
                mp[x]++;
            }
        }

        int ans = 0;
        for(auto [x, y]: mp) {
            ans = max(y, ans);
        }

        cout << ans << endl;
        
    }
    

    return 0;
}