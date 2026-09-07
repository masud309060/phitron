#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << arr[0];


        // int left_sum = 0;
        // int right_sum = 0;
        // for (int i = 0, j = n - 1; i <= j;)
        // {
        //     cout << i << endl;
        //     if(left_sum <= right_sum) {
        //         left_sum += arr[i];
        //         i++;
        //     } else {
        //         right_sum += arr[j];
        //         j--;
        //     }
        // }

        // cout << left_sum << endl;
        // cout << right_sum << endl;
        
        
    
    }
    

    return 0;
}