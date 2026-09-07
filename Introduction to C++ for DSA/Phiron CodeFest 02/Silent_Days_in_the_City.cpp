#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    for (int t = 0; t < q; t++)
    {
        int l, r;
        cin >> l >> r;

        int count = 0;

        for (int i = l - 1; i <= r; i++)
        {
            if(i - 1 < 0) continue;
            if(i + 1 > r) continue;

            if(arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
                count++;
            }
        }

        cout << count << endl;
    }
    

    return 0;
}