#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k = 15;
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int n = arr.size();

    vector<long long> prefix_sum(n);
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++) prefix_sum[i] = prefix_sum[i - 1] + arr[i];

    map<long long, int> mp;
    int r = 0, ans = 0;

    while (r < n)
    {

        if(mp.find(prefix_sum[r]) != mp.end()) {
            mp[prefix_sum[r]] = min(mp[prefix_sum[r]], r);
        } else {
            mp[prefix_sum[r]] = r;
        }
        
        int target = prefix_sum[r] - k;

        cout << "prefix_sum= " << prefix_sum[r] << endl;
        cout << "target;; " << target << " - r=" << r << endl;

        if(target == 0) {
            ans = max(ans, r + 1);
        } else if(mp.find(target) != mp.end()) {
            int l = mp[target];
            cout << l << endl;
            ans = max(ans, r - l);
        }

        cout << ans << endl;

        r++;
    }

    cout << ans;
    
    return 0;
}