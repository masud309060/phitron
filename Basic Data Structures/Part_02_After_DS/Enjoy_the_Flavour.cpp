#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

    
        long long ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            long long left_sum = 0;
            long long right_sum = 0;
            for (int j = 0; j < i; j++)
            {
                left_sum += arr[j];
            }

            for (int j = i; j < n; j++)
            {
                right_sum += arr[j];
            }
            long long diff = abs(left_sum - right_sum);
            
            ans = min(ans, diff);
        }
        
        cout << ans << endl;
    }
    

    return 0;
}