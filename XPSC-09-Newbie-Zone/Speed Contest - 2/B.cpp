#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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

        int f = arr[0];
        int ans = 0;

        for(int x : arr) {
            if(x >= f) {
                ans++;
            }
        }

        cout << ans << endl;
        
        
    }
    

    return 0;
}