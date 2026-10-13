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
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int one_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 1) one_sum++;
        }

        if(one_sum < k) {
            cout << -1 << endl;
        } else if(one_sum == k) {
            cout << 0 << endl;
        } else {
            vector<int> prefix_sum(arr);
            for (int i = 1; i < n; i++)
            {
                prefix_sum[i] += prefix_sum[i - 1];
            }
            
            int r = 0, len = 0;
            map<int, int> mp;
            while (r < n)
            {
                if(mp.find(prefix_sum[r]) != mp.end()) {
                    mp[prefix_sum[r]] = min(mp[prefix_sum[r]], r);
                } else {
                    mp[prefix_sum[r]] = r;
                }

                int target = prefix_sum[r] - k;
                if(target >= 0 && mp.find(target) != mp.end()) {
                    int l = mp[target];
                    len = max(len, target == 0 ? r + 1 : r - l);
                }

                r++;
            }

            cout << n - len << endl;
        }
    }
    

    return 0;
}