#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    vector<long long int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> prefix_arr(n);
    prefix_arr[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_arr[i] = prefix_arr[i - 1] + arr[i];
    }
    

    while (q--) // O(N)
    {
        int l, r;
        cin >> l >> r;

        long long  sum = prefix_arr[r - 1];
        if(l > 1) sum -= prefix_arr[l - 2];

        cout << sum << endl;
    }
    

    return 0;
}

// O(N*N)