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

        string s;
        cin >> s;

        int l = 0, r = 0, b = 0, ans = 0;
        while (r < n)
        {
            if(s[r] == 'B') b++;

            if(r - l + 1 == k) {
                ans = max(b, ans);

                if(s[l] == 'B') b--;
                l++; r++;
            } else {
                r++;
            }
        }
        

        cout << k - ans << endl;
    }
    

    return 0;
}