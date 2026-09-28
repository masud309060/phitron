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

        if(n - 1 == k) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;

            for (int i = 1; i <= k; i++) cout << i << " ";
            for (int i = k + 2; i <= n; i++) cout << i << " ";
            if(k + 1 < n) cout << k + 1 << endl;
        }
    }
    

    return 0;
}