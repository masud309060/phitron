#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b, h, c;
    cin >> b >> h >> c;

    int middle = h + c;

    int ans = 0;
    while (b >= 2 && middle > 0)
    {
        b -= 2;
        middle--;
        ans++;
    }

    cout << ans;
    
    return 0;
}