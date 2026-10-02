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

        int mex = 0;
        while (mp[mex] > 0)
        {
            mex++;
        }
        
        int ans = 0;
        for(auto [val, c]: mp) {
            if(val < mex) {
                int dupli = c - 1;
                ans += dupli * val;
            }

            if(val > mex) {
                int upto = mex + 1;
                int can_decrease = val - upto;
                ans += can_decrease * c;
            }
        }

        cout << ans << endl;
        if(ans % 2 == 0) cout << "Bob\n";
        else cout << "Alice\n";
    }

    return 0;
}