#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int missing_small_num;
    if(arr[0] == 0) {
        missing_small_num = arr[n - 1] + 1;

        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i + 1] - arr[i] > 1) {
                missing_small_num = arr[i] + 1;
                break;
            }
        }
        
    } else {
        missing_small_num = 0;
    }
    
    cout << missing_small_num;

    return 0;
}