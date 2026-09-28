#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char ch;
    cin >> ch;

    if(ch == 'B') {
        cout << 'Y';
    }
    if(ch == 'Y') {
        cout << 'R';
    }
    if(ch == 'R') {
        cout << 'B'; 
    }



    return 0;
}