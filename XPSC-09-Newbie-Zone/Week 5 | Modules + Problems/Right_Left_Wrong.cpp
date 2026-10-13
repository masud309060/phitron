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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long> prefix_sum(n);
        prefix_sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i];
        }        

        string s;
        cin >> s;

        int l = 0, r = n - 1;
        long long ans = 0;

        while (l < r)
        {
            if(s[l] == 'L' && s[r] == 'R') {
                ans += prefix_sum[r] - (l > 0 ? prefix_sum[l - 1] : 0);
                l++;
                r--;    
            } else {
                while (s[l] != 'L' && l < r) l++;
                while (s[r] != 'R' && l < r) r--;   
            }
        }

        cout << ans << endl;
        
    }
    

    return 0;
}