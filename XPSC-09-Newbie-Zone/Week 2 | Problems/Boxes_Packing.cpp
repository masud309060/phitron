#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> mp;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }

    int ans = 0;
    for(auto [x, y]: mp) {
        ans = max(y, ans);
    }
    
    cout << ans;
    
    return 0;
}