#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int l = 0;
        int r = n - 1;
        int rm = 0;

        while (l < r)
        {
            if(s[l] != s[r]) {
                if(s[l + 1] == s[r]) {
                    rm++;
                    l++;
                } else if(s[l] == s[r - 1]) {
                    rm++;
                    r--;
                } else {
                    rm += 2;
                }
            }

            l++;
            r--;
        }   

        cout << rm << endl;
    }
    

    return 0;
}