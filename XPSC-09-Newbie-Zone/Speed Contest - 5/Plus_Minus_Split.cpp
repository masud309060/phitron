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

        int flag = true;
        for (int i = 1; i < n; i++)
        {
            if(arr[0] != arr[i]) {
                int target = arr[0] + arr[i];
                int ind = i;

                for (int j = ind; j < n; j++)
                {
                    if(arr[j] - arr[ind] != target) {
                        flag = false;
                        break;
                    }
                }

                if(flag == false) break;
            }
        }

        if(flag == true) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}