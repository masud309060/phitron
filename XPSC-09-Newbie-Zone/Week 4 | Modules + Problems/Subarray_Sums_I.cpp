#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> prefix_sum(arr);
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] += prefix_sum[i - 1];
    }
    
    int ans = 0;
    int l = 0;
    int r = 0;

    while (r < n)
    {
        long long sum = prefix_sum[r] - (l > 0 ? prefix_sum[l - 1] : 0);
        if(sum == k) ans++;

        if(sum < k) {
            r++;
        } else {
            l++;
        }
    }

    cout << ans;
        
    return 0;
}