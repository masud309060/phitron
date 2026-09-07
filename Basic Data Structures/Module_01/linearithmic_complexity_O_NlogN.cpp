#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) // O(N)
    {
        for (int i = 1; i < n; i*=2) // O(logN) 
        {
            cout << i << endl;
        }
    }
    

    // O(N * logN)
    // O(NlogN)

    return 0;
}