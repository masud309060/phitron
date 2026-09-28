#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
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
    
    map<long long, long long> mp;
    long long ans = 0;
    int i = 0;
    while (i < n)
    {
        long long target = prefix_sum[i] - k;

        if(target == 0) ans++;

        if(mp.find(target) != mp.end()) {
            ans += mp[target];
        }

        mp[prefix_sum[i]]++;
        i++;
    }

    cout << ans;
        
    return 0;
}