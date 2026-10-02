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

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i] - i]++;
        }

        int mx = 0;
        for(auto [x, y]: mp) {
            mx = max(y, mx);
        }
        
        cout << n - mx << endl;
    }

    return 0;
}