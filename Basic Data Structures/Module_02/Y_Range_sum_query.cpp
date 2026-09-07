#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (q > 0) // O(N)
    {
        int l, r;
        cin >> l >> r;

        vector<int> subArr(arr.begin() + l - 1, arr.begin() + r); // O(N)
        
        long long int sum = 0;
        for(int x: subArr) sum += x; // O(N)
        cout << sum << endl;

        q--;
    }
    

    return 0;
}

// O(N*N)