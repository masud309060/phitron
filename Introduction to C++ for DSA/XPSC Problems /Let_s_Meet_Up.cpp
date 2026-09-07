#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int mx = max(a, b);
    int mn = min(a, b);
    
    long long lcm = mx;

    while ((lcm % mn != 0))
    {
        lcm += mx;
    }
    
    cout << lcm;

    return 0;
}