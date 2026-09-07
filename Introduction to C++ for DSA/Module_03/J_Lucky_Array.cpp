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

    int m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        m = min(m, arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == m) count++;
    }

    if(count % 2 != 0) {
        cout << "Lucky";
    } else {
        cout << "Unlucky";
    }    
    

    return 0;
}