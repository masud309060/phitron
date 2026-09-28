#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ans = min(n, m - n);
    cout << ans;

    return 0;
}