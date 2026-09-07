#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int len = s.size();

    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        if(s[i] != t[i]) {
            ans++;
        }
    }

    cout << ans;
    
    return 0;
}