#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int r, b, g;
        cin >> r >> b >> g;

        int bundle = 0;
        while (r > 0 && b > 0 && g > 0)
        {
            bundle++;
            r--;
            b--;
            g--;
        }

        int total = (bundle*10) + (r*3) + (b*3) + (g*3);
        cout << total << endl;
    }
    

    return 0;
}