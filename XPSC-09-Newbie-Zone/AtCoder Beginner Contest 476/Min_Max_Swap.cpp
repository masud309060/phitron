#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n, m;
    cin >> n >> m;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
       int mn = INT_MAX;
       int mx = INT_MIN;
       int mnIndex = -1;
       int mxIndex = -1;

       for (int j = l; j <= r; j++)
       {
            if(arr[j] < mn) {
                mn = arr[j];
                mnIndex = j;
            }

            if(arr[j] > mx) {
                mx = arr[j];
                mxIndex = j;
            }
       }

       swap(arr[mnIndex], arr[mxIndex]);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    

  

    return 0;
}