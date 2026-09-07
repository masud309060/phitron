#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);     

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    int mex = arr[n - 1] + 1;
    if(arr[0] != 0) {
        mex = 0;
    } else {
        for (int i = 0; i < n - 1; i++)
        {
            int diff = arr[i + 1] - arr[i];
            if(diff > 1) {
                mex = arr[i] + 1;
                break;
            }
        }
    }

    cout << mex;
    
    return 0;
}