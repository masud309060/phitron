#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = 0, ans = INT_MAX;
    long long sum = 0;
    bool has_ans = false;
    while (r < n)
    {
        sum += arr[r];

        if(sum >= k) {
            has_ans = true;
            while (sum >= k && l <= r)
            {
                ans = min(ans, r - l + 1);
                sum -= arr[l];
                l++;
            }
        }

        r++;
    }
    
    if(has_ans == true) cout << ans;
    else cout << -1;    

    return 0;
}