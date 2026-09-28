#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;


    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long ans = 0;
        if(a >= b) {
            a += c;
            ans = abs(a - b);
        } else {
            ans = abs(a - b);
            ans = max(abs(a - b), abs(a + c - b));
        }

        cout << ans << endl;
    }
    

    return 0;
}