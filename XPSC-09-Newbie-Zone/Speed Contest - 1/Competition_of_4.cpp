#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int r = 0;
    if(n == 1) {
        r = 8000;
    } else if(n == 2) {
        r = 4000;
    } else if(n == 3) {
        r = 2000;
    } else if(n == 4) {
        r = 1000;
    }

    cout << r;
    return 0;
}