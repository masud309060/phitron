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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if(sum < 0) {
                idx = i;
                break;
            }
        }

        sum = 0;
        string ans = "YES";
        for (int i = 0; i < n; i++)
        {
            if(idx == i) continue;
            sum += arr[i];
            if(sum < 0) {
                ans = "NO";
                break;
            }
        }

        cout << ans << endl;
    }
    

    return 0;
}