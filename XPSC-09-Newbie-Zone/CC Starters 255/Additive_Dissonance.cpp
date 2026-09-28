#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        int mx = 2;
        for(auto [x, y]: mp) {
            mx = max(mx, y);
        }

        int ans;
        if(mx % 2 == 0) {
            ans = mx/2;
        } else {
            ans = mx/2 + 1;
        }

        cout << ans << endl;
    }
    
    return 0;
}