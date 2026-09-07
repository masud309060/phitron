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

    int count = 0;

    for (auto it = arr.begin(); it < arr.end(); it++) // O(N)
    {
        auto value = find(arr.begin(), arr.end(), *it + 1); // O(N)


        if(value != arr.end()) {
            count++;
        }
    }

    cout << count;

    return 0;
}

// O(N*N)