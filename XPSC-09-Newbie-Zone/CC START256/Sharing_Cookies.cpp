#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    int more = x - y;

    if(more % 2 == 0) {
        cout << more / 2;
    } else {
        cout << "-1";
    }

    return 0;
}