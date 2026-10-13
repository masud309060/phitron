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

        string ans = "";
        if(k == 0) {
            // off state 
            if(n % 4 == 0) {
                ans = "Off";
            } else {
                ans = "On";
            }
        } else {
            // on state 
            if(n % 4 == 0) {
                ans = "On";
            } else {
                ans = "Ambiguous";
            }
        }

        cout << ans << endl;

        
    }
    

    return 0;
}