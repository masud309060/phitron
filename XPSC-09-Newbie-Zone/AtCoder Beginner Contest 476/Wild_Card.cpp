#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    bool match = true;
    for (int i = 0; i < n; i++)
    {
        if(t[i] != '*' && t[i] != s[i]) {
            match = false;
            break;
        }
    }

    if(match == true) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    

    return 0;
}