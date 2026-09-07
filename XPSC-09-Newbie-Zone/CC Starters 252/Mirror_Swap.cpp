#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n; 
        cin >> n;
        vector<int> arr(2 * n);

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }


        int i = 0, j = 2*n - 1;
        int ans = 0;
        while (i < j)
        {
            if(arr[i] < arr[j]) {
                swap(arr[i], arr[j]);
            }

            i++;
            j--;
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        
        cout << sum << endl;
        
    }
    

    return 0;
}