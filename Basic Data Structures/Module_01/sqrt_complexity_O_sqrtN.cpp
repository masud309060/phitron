#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // i <= sqrt(n) == i*i <= n
    for (int i = 1; i*i <= n; i++)
    {
        if(n % i == 0) {
            cout << i << " " << n/i << " ";
        }
    }
    


    // input = operations
    // 4 = 2
    // 36 = 6
    // 81 = 9
    // N = sqrt(N)
    

    return 0;
}