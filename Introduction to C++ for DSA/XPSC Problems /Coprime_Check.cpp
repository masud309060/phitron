#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0)
    {
        int a, b;
        cin >> a >> b;

        int mn = min(a , b);

        int coprime = 1;

        for (int i = 2; i <= mn; i++)
        {
            if(a % i == 0 && b % i == 0) {
                coprime = 0;
                break;
            }
        }

        if(coprime == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        t--;
    }
    


    return 0;
}