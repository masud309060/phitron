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
        vector<map<string, bool>> v;

        for (int i = 0; i < m; i++)
        {
            map<string, bool> mp;
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s] = true;
            }
            v.push_back(mp);
        }

        vector<int> total_points(m, 0);
        for (int i = 0; i < m; i++)
        {
            auto mp = v[i];
            for(auto [x, y] : mp) {
                int has = 1;
                for (int j = 0; j < m; j++)
                {
                    if(i == j) continue;
                    if(v[j].find(x) != v[j].end()) {
                        has++;
                    }
                }
                
                if(has == 1) total_points[i] += 3;
                if(has == 2) total_points[i] += 1;                
            }
        }

        for(int x: total_points) cout << x << " ";
        cout << endl;

    }
    

    return 0;
}