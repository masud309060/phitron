#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);     

    for (int i = 0; i < n; i++) cin >> arr[i];
    
    while (q--)
    {
        
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        
        vector<int> freq(n);
        for (int i = l; i <= r; i++)
        {
            freq[arr[i]]++;
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(freq[i] == 0) {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}