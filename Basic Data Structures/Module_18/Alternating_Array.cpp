#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--)
    {
        int n; cin >> n;
        vector<int> arr(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }


        int total_odd_even_change_need = 0;
        int total_even_odd_change_need = 0;
        for (int i = 1; i <= n; i++)
        {
            // odd item 
            if(i % 2 != 0) {
                if(arr[i - 1] % 2 != 1) {
                    total_odd_even_change_need++;
                }

                if(arr[i - 1] % 2 != 0) {
                    total_even_odd_change_need++;
                }
            } else {
                // even item 
                if(arr[i - 1] % 2 != 0) {
                    total_odd_even_change_need++;
                }

                if(arr[i - 1] % 2 != 1) {
                    total_even_odd_change_need++;
                }
            }
        }        

        int ans = min(total_odd_even_change_need, total_even_odd_change_need);
        
        cout << ans << endl;
    }
    

    return 0;
}