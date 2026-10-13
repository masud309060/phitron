#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n), prefix_min(n), suffix_max(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        prefix_min[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix_min[i] = min(prefix_min[i - 1], arr[i]);
        }

        suffix_max[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suffix_max[i] = max(suffix_max[i + 1], arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if(arr[i] == prefix_min[i] || arr[i] == suffix_max[i]) {
                cout << 1;
            } else {
                cout << 0;
            }
        }

        cout << endl;
    }
    

    return 0;
}