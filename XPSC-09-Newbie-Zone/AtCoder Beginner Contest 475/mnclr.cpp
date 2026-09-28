#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, new_s;
    cin >> s;



    for (int i = 0; i < s.size(); i++)
    {
        new_s += s[i];
        if(i != s.size() - 1) {
            new_s += 'o';
        }
    }

    cout << new_s;
    

    return 0;
}