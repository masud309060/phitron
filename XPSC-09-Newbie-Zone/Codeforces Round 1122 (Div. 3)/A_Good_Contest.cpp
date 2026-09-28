#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, p = 3;
        cin >> n;

        int arr[n];

        for (int i = 0; i < p; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;
        for (int i = 0; i < p; i++)
        {
            // ith - pare nai 
            int x = n - arr[i];
            ans = max(ans, x);
        }

        cout << ans << endl;

    }
    

    return 0;
}