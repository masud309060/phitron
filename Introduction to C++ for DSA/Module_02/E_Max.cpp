#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;

    cin >> x;

    int arr[x];

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    int max_value = INT_MIN;

    for (int i = 0; i < x; i++)
    {
        max_value = max(max_value, arr[i]);
    }

    cout << max_value;
    

    return 0;
}