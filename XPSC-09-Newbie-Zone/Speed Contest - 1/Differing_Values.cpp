#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        
        int total1 = 0;
        int total0 = 0;
        
        for(auto x: s) {
            if(x == '0') total0++;
            else total1++;
        }

        if(total0 == total1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}