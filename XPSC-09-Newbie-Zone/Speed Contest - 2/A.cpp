#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r >> b;

    int g = min(r, b);
    r -= g;
    b -= g;

    int ans = (r * 1) + (b * 2) + (g * 5);

    cout << ans;
    

    return 0;
}