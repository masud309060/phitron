#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--)
    {
        int n = 5;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long sum_inverse = (arr[0] + arr[1] + arr[2] + arr[3]) * -1;
        long long max_sum = sum_inverse + arr[4];
        
        cout << max_sum << endl;
    }
    

    return 0;
}