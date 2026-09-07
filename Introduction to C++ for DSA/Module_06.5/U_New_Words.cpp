#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    int e = 0;
    int g = 0;
    int y = 0;
    int p = 0;
    int t = 0;

    for(char ch: s) {
        if(ch == 'e' || ch == 'E') e++;
        if(ch == 'g' || ch == 'G') g++;
        if(ch == 'y' || ch == 'Y') y++;
        if(ch == 'p' || ch == 'P') p++;
        if(ch == 't' || ch == 'T') t++;
    }

    int m = min({e, g, y, p, t});

    cout << m;

    return 0;
}