#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> prefix_sums(n);
    prefix_sums[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sums[i] = arr[i] + prefix_sums[i - 1];
    }    

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        r--;
        l--;
        long long int ans = prefix_sums[r];
        if(l > 0) {
            ans -= prefix_sums[l - 1];
        }
        
        cout << ans << endl;


    }
    
    

    return 0;
}