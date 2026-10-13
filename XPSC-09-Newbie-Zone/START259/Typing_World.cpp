#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s, k;
        cin >> s >> k;

        map<char, int> mp;
        for(auto x: k) {
            mp[x]++;
        }

        int len = 0;
        int left = 0;
        int right = 0;
        for(auto x: s) {
            if(mp.find(x) != mp.end()) {
                right = 0;
                left++;
                len = max(len, left);
            } else {
                left = 0;
                right++;
                len = max(len, right);
            }
        }

        cout << len << endl;
    }
    
    

    return 0;
}