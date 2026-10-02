#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long s;
    cin >> n >> s;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = 0, ans = n;
    long long sum = 0;
    bool no_seg = true;
    while (r < n)
    {
        sum += arr[r];
        if(sum >= s) {
            no_seg = false;
            while (sum >= s && l <= r)
            {
                ans = min(ans, r - l + 1);
                sum -= arr[l];
                l++;
            }
        }

        r++;
    }

    if(no_seg == true) {
        cout << -1;
    } else {
        cout << ans;
    }

    
    return 0;
}

