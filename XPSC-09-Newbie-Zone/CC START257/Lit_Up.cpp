#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if((4*k + 2) < n) {
            cout << "-1" << endl;
        } else {
            int can_cover = k * 2 + 1;
            int can_move = (can_cover + 1) / 2;

            int l_min = INT_MAX;
            int r_min = INT_MAX;
            int l = -1;

            int min_n = min(can_move, n);
            for (int i = 0; i < min_n; i++)
            {
                if(arr[i] < l_min) {
                    l_min = arr[i];
                    l = i;
                }
            }

            for (int i = n - 1; i >= n - min_n; i--)
            {
                if(l == i) continue;
                if(arr[i] < r_min) {
                    r_min = arr[i];
                }
            }

            cout << l_min + r_min << endl;
        }

    }
    

    return 0;
}