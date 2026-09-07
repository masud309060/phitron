#include <bits/stdc++.h>
using namespace std;

int findEquilibrium(vector<int> &arr)
{
    // code here

    int n = arr.size();
    vector<long long int> prefix_sums(n);
    prefix_sums[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sums[i] = prefix_sums[i - 1] + arr[i];
    }

    int e_index = -1;
    for (int i = 2; i < n; i++)
    {
        long long int l = prefix_sums[i - 1];
        long long int r = prefix_sums[n - 1] - prefix_sums[i];

        cout << l << " " << r << " " << endl;

        if (l == r)
        {
            e_index = i;
            break;
        }
    }

    return e_index;
}

int main()
{
    vector<int> arr = {-7 ,1, 5, 2, -4, 3, 0};
    int ans = findEquilibrium(arr);

    cout << ans;

    return 0;
}