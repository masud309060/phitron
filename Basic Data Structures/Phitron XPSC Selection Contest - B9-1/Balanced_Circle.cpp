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

        sort(arr.begin(), arr.end());

        int ans = true;
        if(arr[0] < arr[1] && arr[0] < arr[n - 1]) {
            ans = false;
        }
        
        for (int i = 1; i < n - 1; i++)
        {
            if(ans == false) break;

            int val = arr[i];
            int l = arr[i - 1];
            int r = arr[i + 1];

            if(val > l && val > r) {
                ans = false;
            }
        }

        if(ans == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        
    }
    

    return 0;
}