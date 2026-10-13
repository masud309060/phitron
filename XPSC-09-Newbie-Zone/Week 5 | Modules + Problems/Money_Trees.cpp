#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> f(n);
        vector<int> h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int l = 0, r = 0, len = 0;
        long long sum = 0;
        while (r < n)
        {
            sum += f[r];
            if(sum <= k) {
                len = max(len, r - l + 1);
            } else {
                if(sum > k) {
                    sum -= f[l];
                    l++;
                }
            }

            if(r + 1 < n) {
                int has_next = h[r] % h[r + 1] == 0;
                if(!has_next) {
                    // reset r, l & sum 
                    r = r + 1;
                    l = r;
                    sum = 0;
                    continue;
                }
            }

            r++;
        }

        cout << len << endl;
    }
    

    return 0;
}