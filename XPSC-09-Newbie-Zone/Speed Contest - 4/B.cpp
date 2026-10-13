#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int ans = y > x ? 0 : x / y;
        cout << ans << endl;
    }
    
    return 0;
}