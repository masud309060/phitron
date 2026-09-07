#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string ans;
        int total_b = 0;
        int total_B = 0;
        int n = s.size();
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == 'b') {
                total_b++;
                continue;
            }

            if(s[i] == 'B') {
                total_B++;
                continue;
            }

            if(total_b > 0 && s[i] >= 'a' && s[i] <= 'z') {
                total_b--;
                continue;
            } 

            if(total_B > 0 && s[i] >= 'A' && s[i] <= 'Z') {
                total_B--;
                continue;
            }

            ans.push_back(s[i]);
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    

    return 0;
}