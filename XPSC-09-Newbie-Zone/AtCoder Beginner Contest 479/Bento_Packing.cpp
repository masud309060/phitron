#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w;
    cin >> n >> w;

    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long total_deli = arr[i].first + arr[j].first;
            long long total_vol = arr[i].second + arr[j].second;

            if(total_vol <= w) {
                ans = max(ans, total_deli);
            }
        }
    }

    cout << ans << endl;
    
    
    

    return 0;
}