#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) result *= i;
    return result;
}

int nCr(int n, int r) {
    if(r > n) return 0;
    return fact(n)/(fact(r) *fact(n - r));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long cnt = 0;
        long long ans = 0;
        for(int x: arr) {
            if(x <= q) {
                cnt++;
            } else {
                if(cnt >= k) {
                    long long N = cnt - k + 1;
                    ans += (N * (N + 1)) / 2;
                }
                cnt = 0;
            }
        }

        if(cnt >= k) {
            long long N = cnt - k + 1;
            ans += (N * (N + 1)) / 2;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}