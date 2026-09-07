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

        int ans = 0;
        for (int i = 0; i < n;)
        {

            if(arr[i] == 0) {
                i++;
                continue;
            }
            
            bool next = true;
            if(i + 1 >= n) next = false;

            if(next == true && arr[i] == 1 && arr[i] == arr[i + 1]) {
                // attack 1 
                arr[i]--;
                arr[i + 1]--;
            } else {
                // attack 2
                arr[i] = 0;
            }

            ans++;
        }

        cout << ans << endl;
        
    }
    

    return 0;
}