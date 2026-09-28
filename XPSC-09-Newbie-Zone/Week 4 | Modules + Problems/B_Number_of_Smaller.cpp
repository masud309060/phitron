#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int a[n];
    int b[m];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> arr;
    int first_idx = 0;
    int second_idx = 0;

    while (second_idx < m) 
    {
        if(first_idx < n && a[first_idx] < b[second_idx]) {
            first_idx++;
        } else {
            second_idx++;
            arr.push_back(first_idx);
        }
    }

    for(int x: arr) {
        cout << x << " ";
    }
    

    return 0;
}