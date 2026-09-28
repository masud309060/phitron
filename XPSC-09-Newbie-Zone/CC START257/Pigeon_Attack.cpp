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

        int min = 1;
        while (n > 0)
        {
            if(min % m == 0) {
                n++;
            }
            n--;
            if(n == 0) break;
            min++;
        }
        
        cout << min << endl;
    }
    

    return 0;
}