#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            // check divisible 
            if(arr[i] % x == 0) {
                // then choose max 
                mx = max(mx, arr[i]);
            }
        }
        cout << mx << endl;
    }
    

    return 0;
}