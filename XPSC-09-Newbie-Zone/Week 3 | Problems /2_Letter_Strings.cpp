#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long ans = 0;

        long long first[11] = {};
        long long second[11] = {};
        long long cnt[11][11] = {};

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            int a = s[0] - 'a';
            int b = s[1] - 'a';

            cout << char(a + 'a') << ", " << char(b + 'a') << endl;

            // Same first character, different second character
            ans += first[a] - cnt[a][b];

            // Same second character, different first character
            ans += second[b] - cnt[a][b];

            cout << "and: " << ans << endl;

            // Store current string
            first[a]++;
            second[b]++;
            cnt[a][b]++;
        }

        cout << ans << '\n';
    }

    return 0;
}