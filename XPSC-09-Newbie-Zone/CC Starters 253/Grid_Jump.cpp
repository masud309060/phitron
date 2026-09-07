#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;

        int cost = INT_MAX;
        for (int i = 0; i <= min(a, b); i++)
        {
            int a_has = a - i;
            int b_has = b - i;
            int cur_cost = i * r;

            int a_step = (a_has + 1) / 2;
            int b_step = (b_has + 1) / 2;

            cur_cost += a_step * p;
            cur_cost += b_step * q;

            cost = min(cur_cost, cost);
        }

        cout << cost << endl;
    }
    

    return 0;
}