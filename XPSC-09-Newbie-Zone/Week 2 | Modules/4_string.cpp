#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    s.push_back('a');
    s.push_back('a');
    s.push_back('a');
    s.pop_back();
    cout << s << '\n';


    cout << s.substr(0, 3) << '\n';
    cout << s.substr(2) << '\n';


    return 0;
}