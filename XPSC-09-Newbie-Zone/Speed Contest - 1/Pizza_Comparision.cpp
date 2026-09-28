#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int small = (100 * 100000) / a;
        int big = (225 * 100000) / b;

        // cout << small << " - " << big << endl;

        if(small == big) {
            cout << "Equal";
        } else if(small > big){
            cout << "Small";
        } else {
            cout << "Large";
        }
        cout << endl;
    }
    
    return 0;
}