#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, set<int>> mp;

        for (int i = 0; i < n; i++)
        {
            
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;

            if((mp.find(a) == mp.end()) || (mp.find(b) == mp.end())) {
                cout << "NO" << endl;
            } else {
                int a_left_most_index = *mp[a].begin();
                int b_righ_most_index = *mp[b].rbegin();

                if(b_righ_most_index > a_left_most_index) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}