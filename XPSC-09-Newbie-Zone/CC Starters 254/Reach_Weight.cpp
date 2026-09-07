#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int total_cost = 0;
        while (n >= 2)
        {
            total_cost += 30;
            n -= 2;
        }

        if(n == 1) {
            total_cost += 20;
            n--;
        }

        cout << total_cost << endl;
        
    }
    

    return 0;
}