#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;
    

    // cout << *s.begin() << endl;
    // cout << *s.end() << endl;

    sort(s.begin(), s.end());

    cout << s << endl;

    return 0;
}