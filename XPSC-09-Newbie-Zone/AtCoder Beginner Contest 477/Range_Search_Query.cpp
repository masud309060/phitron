#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;
    t.reserve();

    int k = t.size();

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        string sub = "", ans = "No";

        while (a + k < b)
        {
            sub += s[b];

            if(sub.size() == k) {
                cout << sub << endl;
                if(sub == t) {
                    ans = "Yes";
                }
                sub.pop_back();
                b--;
            } else {
                b--;
            }
        }
        
        cout << ans << endl;
    }
    

    return 0;
}