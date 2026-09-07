#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int s_size = s.size();

    if(s_size == 1) s = "000" + s;
    if(s_size == 2) s = "00" + s;
    if(s_size == 3) s = "0" + s;

    cout << s;

    return 0;
}