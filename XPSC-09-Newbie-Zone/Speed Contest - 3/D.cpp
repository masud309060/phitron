#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int zero = 0;
        int one = 0;
        int ans = 1;
        for(char x: s) {
            if(x == '0') zero++;
            if(x == '1') one++;

            if(zero == one) ans *= 2;
        }

        cout << ans << endl;
    }

    return 0;
}