#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        map<int, int> ihave;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            ihave.insert({x, 1});
        }

        int ans = m - ihave.size();
        cout << ans << endl;
    }

    return 0;
}