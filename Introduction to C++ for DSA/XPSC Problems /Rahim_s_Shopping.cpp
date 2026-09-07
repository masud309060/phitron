#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = -1;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max && arr[i] <= k) {
            max = arr[i];
        }
    }
    

    cout << max;

    return 0;
}