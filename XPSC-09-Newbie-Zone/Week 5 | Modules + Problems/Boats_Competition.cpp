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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        
        int ans = 0;
        for (int i = 1; i <= 2*n; i++)
        {
            int total = 0;
            for(auto [x, y]: mp) {
                int target = i - x;

                if(target >= 0 && mp.count(target)) {
                    total += min(y, mp[target]);
                }
            }

            total /= 2;
            ans = max(ans, total);
        }

        cout << ans << endl;   
    }
    
    return 0;
}