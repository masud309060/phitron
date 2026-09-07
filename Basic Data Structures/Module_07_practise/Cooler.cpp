#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--)
    {
        int n, m;
        cin >> n >> m;

        int total = 0;
        for (int i = n; i > m; i--)
        {
            total += i;
        }

        cout << total << endl;
    }

    return 0;
}