#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    vector<pair<int, int>> arr;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        arr.push_back({x, i});
    }
    
    sort(arr.begin(), arr.end());

    int l = 0, r = n - 1;
    while (l < r)
    {
        long long sum = arr[l].first + arr[r].first;
        if(sum == k) {
            cout << arr[l].second << " " << arr[r].second;
            return 0;
        }

        if(sum < k) {
            l++;
        } else {
            r--;
        }
    }

    cout << "IMPOSSIBLE";
    

    return 0;
}