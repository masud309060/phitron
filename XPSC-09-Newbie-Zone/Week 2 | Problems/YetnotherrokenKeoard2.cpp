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

        string ans = "";
        for(char ch: s) {
            if(ch == 'b') {
                int index = -1;
                for (int i = ans.size() - 1; i >= 0; i--)
                {
                    if(ans[i] >= 'a' && ans[i] <= 'z') {
                        index = i;
                        break;
                    }
                }
                if(index != -1) ans.erase(index, 1);
            } else if(ch == 'B') {
                int index = -1;
                for (int i = ans.size() - 1; i >= 0; i--)
                {
                    if(ans[i] >= 'A' && ans[i] <= 'Z') {
                        index = i;
                        break;
                    }
                }
                if(index != -1) ans.erase(index, 1);
            } else {
                ans += ch;
            }
        }

        cout << ans << endl;
    }
    

    return 0;
}