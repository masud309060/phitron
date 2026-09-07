#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    vector<int> new_arr;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] != x) new_arr.push_back(arr[i]);
    }

    for (int i = 0; i < new_arr.size(); i++)
    {
        cout << new_arr[i] << " ";
    }

    return 0;
}