#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int max_odd_position = 0;
    for (int i = 0; i < n; i += 2)
    {
        max_odd_position = max(arr[i], max_odd_position); 
    }

    long long int max_even_position = 0;
    for (int i = 1; i < n; i += 2)
    {
        max_even_position = max(arr[i], max_even_position); 
    }

    long long int ans =  max_odd_position + max_even_position;

    cout << ans;
    
    return 0;
}