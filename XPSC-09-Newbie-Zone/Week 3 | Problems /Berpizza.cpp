#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, serial = 1;
    cin >> q;

    set<pair<int, int>> s;
    multiset<pair<int,int>> ml;
    vector<int> ans;

    while (q--)
    {
        int a;
        cin >> a;

        if(a == 1) {
            int money;
            cin >> money;

            s.insert({serial, money});
            ml.insert({money, -serial});

            serial++;
        } else if(a == 2) {
            // monocarp
            int pos = s.begin()->first;
            int money = s.begin()->second;

            s.erase(s.begin());
            ml.erase({money, -pos});
            ans.push_back(pos);
        } else {
            // polycarp
            int pos = -ml.rbegin()->second;
            int money = ml.rbegin()->first;

            ml.erase(--ml.end());
            s.erase({pos, money});
            ans.push_back(pos);
        }
    }

    for(int x: ans) {
        cout << x << " ";
    }

    return 0;
}