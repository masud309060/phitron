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

        set<pair<int, int>> st1;
        set<pair<int, int>> st2;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            st1.insert({i, x});
            st2.insert({x, i});
        }

        auto l = st1.begin();
        auto r = --st1.end();
        while (true)
        {
            int pos_l = l->first;
            int val_l = l->second;

            int pos_r = r->first;
            int val_r = r->second;

            int mn = st2.begin()->first;
            int mx = st2.rbegin()->first;

            if(pos_l == pos_r) break;

            if(val_l == mn || val_l == mx) {
                l++;
                st2.erase({val_l, pos_l});
            } else if(val_r == mn || val_r == mx) {
                r--;
                st2.erase({val_r, pos_r});
            } else {
                break;
            }
        }

        if(l->first < r->first) {
            cout << l->first << " " << r->first << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    

    return 0;
}