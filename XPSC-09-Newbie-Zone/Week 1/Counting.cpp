#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = b - a + 1;

    if(ans > 0) cout << ans;
    else cout << 0;

    return 0;
}