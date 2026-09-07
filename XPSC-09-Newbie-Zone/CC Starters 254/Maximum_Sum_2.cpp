#include <bits/stdc++.h>
using namespace std;

int main() {
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

        // int remaining = N - K;
        // int sum = 0;
        // for (int i = 0; i < remaining; i++)
        //     sum += A[i];

        // int ans = sum;

        // for (int i = remaining; i < N; i++)
        // {
        //     sum += A[i];
        //     sum -= A[i - remaining];

        //     ans = max(ans, sum);
        // }
        

        // cout << max_sum << endl;        

    }
    

    return 0;
}