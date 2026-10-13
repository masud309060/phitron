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

        vector<int> arr(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            ans = max(ans, arr[i]);
        }

        cout << ans << endl;
    }
    

    return 0;
}