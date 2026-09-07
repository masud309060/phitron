#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;
        int mx = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            
            if(arr[i] <= mx) {
                ans = max(mx + arr[i], ans);
            }

            mx = max(arr[i], mx);

            if(i == 0 && mx > ans) {
                ans = mx;
            }
        }
        

        cout << ans << endl;        
    }
    

    return 0;
}