#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m = 3;
        cin >> n;
        map<string, vector<int>> mp;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        // for(auto [x, y]: mp) {
        //     cout << x << " : ";
        //     for(auto val: y) {
        //         cout << val << " ";
        //     }
        //     cout << endl;
        // }

        vector<int> ans(m);
        for(auto [x, y]: mp) {
            if(y.size() == 1) {
                ans[y[0]] += 3;
            }

            if(y.size() == 2) {
                ans[y[0]] += 1;
                ans[y[1]] += 1;
            }
        }

        for(auto x: ans) {
            cout << x << " ";
        }
        cout << endl;
        
    }
    

    return 0;
}