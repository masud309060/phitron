#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    string ans = s;
    for (int i = 0; i <= n - k; i++)
    {
        string temp = s;
        sort(temp.begin() + i, temp.begin() + i + k);
        ans = min(temp, ans);
    }

    cout << ans;

    return 0;
}