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

        vector<int> prefix_sum(n);

        prefix_sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i];
        }

        int max_sum = 0;
        for (int i = 0, j = n - k - 1; j < n; i++, j++)
        {
            int sum;
            if(i == 0) {
                sum = prefix_sum[j];
            } else {
                sum = prefix_sum[j] - prefix_sum[i - 1];
            }

            max_sum = max(max_sum, sum);
        }
        

        cout << max_sum << endl;        

    }
    

    return 0;
}