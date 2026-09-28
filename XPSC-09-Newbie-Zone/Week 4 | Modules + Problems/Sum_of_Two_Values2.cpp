#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    multimap<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        mp.insert({x, i});
    }

    set<int> ans;
    for (auto it = mp.begin(); it != mp.end();)
    {
        int val = it->first;
        int pos = it->second;

        auto delete_it = it;
        it++;

        mp.erase(delete_it);
        if(mp.size() == 0) break;

        int search = k - val;
        auto search_it = mp.find(search);

        if(search_it != mp.end()) {
            ans.insert(pos);
            ans.insert(search_it->second);
            break;
        }
    }

    if(ans.size() == 2) {
        for(auto x: ans) cout << x << " ";
    } else {
        cout << "IMPOSSIBLE";
    }
    
    
    

    return 0;
}