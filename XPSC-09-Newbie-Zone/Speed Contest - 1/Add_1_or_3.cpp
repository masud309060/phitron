#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        long long totalMoveBy3 = m / 3;

        bool flag = false;
        for (long long i = totalMoveBy3; i >= 0; i--)
        {
            long long hasMove = n - i;
            if(((3 * i) + hasMove) == m) {
                flag = true;
                break;
            }
        }
        
        if(flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}