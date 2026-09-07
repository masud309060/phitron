#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0)
    {
        int n, m;
        cin >> n >> m;

        string sn;
        string sm;

        cin >> sn >> sm;
        int mn = min(n, m);

        for (int i = 0; i < mn; i++)
        {
            if(sn[i] != sm[i]) break;
            cout << sn[i];
        }

        cout << endl;
        

        t--;
    }
    

    return 0;
}