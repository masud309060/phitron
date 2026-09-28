#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int r, p;
        cin >> r >> p;

        // if(r > p) {
        //     cout << "0" << endl;
        // } else {
        //     int total_sit = r * 2;
        //     int faka_sit = total_sit - p;
        //     int together = total_sit - (faka_sit * 2);
        //     cout << together << endl;
        // }

        // if(r >= p) {
        //     cout << 0 << endl;
        // } else {
        //     int extra = p - r;
        //     cout << extra * 2 << endl;
        // }

        cout << max((p - r) * 2, 0) << endl;
    }
    

    return 0;
}