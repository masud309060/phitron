#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // long long curr_sum = 0;
    // for (int i = 0; i < k; i++)
    // {
    //     curr_sum += arr[i];
    // }

    // long long mx = curr_sum;
    // for (int i = k; i < n; i++)
    // {
    //     curr_sum = curr_sum + arr[i] - arr[i - k];
    //     mx = max(mx, curr_sum);
    // }

    // cout << mx;


    long long sum = 0, ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += arr[r];
        if(r - l + 1 == k) {
            ans = max(ans, sum);
            ans -= arr[l];
            l++, r++;
        } else {
            r++;
        }
    }

    cout << ans << endl;
    
    return 0;
}