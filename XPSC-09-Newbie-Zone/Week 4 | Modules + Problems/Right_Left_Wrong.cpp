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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        vector<long long> prefix_sum(arr);
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] += prefix_sum[i - 1];
        }

        int l = 0, r = n - 1;
        long long ans = 0;
        while (l < r)
        {

            if(s[l] == 'L' && s[r] == 'R') {
                ans += prefix_sum[r];
                if(l > 0) ans -= prefix_sum[l - 1];
                l++; r--;
            } else if(s[l] == 'L') {
                r--;
            } else if(s[r] == 'R') {
                l++;
            } else {
                l++; r--;
            }
        }
        
        cout << ans << endl;
    }
    

    return 0;
}