#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<long long int> prefix_sum_arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(ans % 2 == 0) {
            break;
        }

        if(arr[i] % 2 == 1) {
            ans -= arr[i];
            break;
        }
    }

    cout << ans;

    return 0;
}