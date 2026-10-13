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

        if(n % 2 == 0) {
            for (int i = 0; i < n; i++)
            {
                if(i == 0 || i == n - 1) cout << 1;
                else cout << 0;
            }
            cout << endl;
        } else {
            for (int i = 0; i < n; i++)
            {
                if(n / 2 == i) cout << 1;
                else cout << 0;
            }
            cout << endl;
        }
    }
    
    return 0;
}