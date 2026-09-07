#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        

        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int val = arr[i] + arr[j] + j - i;
                if(val < min) {
                    min = val;
                }
            }
        }

        cout << min;
        
        
    }
    
    return 0;
}