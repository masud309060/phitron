#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int ans = 0;
        for (int i = l; i <= r; i++)
        {
            int gcd_value = gcd(i, k);
            if(gcd_value == 1) {
                ans++;
            }
        }

        cout << ans << endl;
    }
    

    return 0;
}