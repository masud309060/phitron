#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if(arr[j] + arr[j + 1] <= k && arr[j + 1] < arr[j]) {
                    swap(arr[j], arr[j + 1]);
                } 
            }            
        }
        
        for(int x: arr) {
            cout << x << " ";
        }

        cout << endl;
    }
    

    return 0;
}