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

        sort(arr.begin(), arr.end(), greater<int>());
        
        vector<long long int> prefix_sum(n);

        prefix_sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i];
        }

        long long int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            long long int sr = prefix_sum[i];
            int cr = i + 1;

            long long int sb = prefix_sum[n - 1] - prefix_sum[i];
            int cb = n - cr;

            long long int r = (sr * cb) + (sb * cr);
            ans = max(ans, r);
        }


        cout << ans << endl;        
    }
    

    return 0;
}