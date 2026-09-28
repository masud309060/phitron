#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long int n, d;
        cin >> n >> d;

        long long int ans = -1;

        while (n > d)
        {
            n--;
            
            if(n % d != 0) {
                ans = n;
                break;
            }
        }
        

        cout << ans << endl;   
    }
    

    return 0;
}