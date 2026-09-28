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
        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
        }

        vector<int> ans; 
        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; n < n; j++)
            {
                if(arr[j] < mn) {
                    
                }
            }
            
        }
        


        
    }
    

    return 0;
}