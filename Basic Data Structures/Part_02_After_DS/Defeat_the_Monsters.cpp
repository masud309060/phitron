#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // attack 1 
        while (a > 0)
        {
            a -= 1;
            b -= 2;
        }

        while (b > 0)
        {
            b -= 1;
            c -= 3;
        }
        

        if(a == 0 && b == 0 && c == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        
    }
    
    return 0;
}