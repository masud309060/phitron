#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    
    int l = 0, r = n - 1;
    long long ans = 0;
    
    long long sum1 = 0, sum3 = 0;
    while (l <= r)
    {
        if(sum1 < sum3) {
            sum1 += arr[l];
            l++;
        } else {
            sum3 += arr[r];
            r--;
        }

        if(sum1 == sum3) {
            ans = max(sum1, ans);
        }
    }

    cout << ans;
    
    

    return 0;
}