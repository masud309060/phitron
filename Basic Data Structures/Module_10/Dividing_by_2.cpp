#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;

    while (q--)
    {
        int n; cin >> n;
        vector<int> arr(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }


        int ans = 0;
        sort(arr.begin(), arr.end());
        while (arr[0] != arr[n - 1])
        {
            arr[n - 1] = floor(arr[n - 1]/2);
            sort(arr.begin(), arr.end());

            ans++;
        }

        cout << ans << endl;
    }
    

    return 0;
}