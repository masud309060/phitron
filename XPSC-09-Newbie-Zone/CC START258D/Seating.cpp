#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        map<int, bool> fillup;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            fillup[x] = true;
        }

        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if(k == 0) break;
            if(fillup.find(i) == fillup.end()) {
                ans.push_back(i);
                k--;
            }
        }

        for(int x: ans) {
            cout << x << " ";
        }

        cout << endl;
        
        
    }
    

    return 0;
}