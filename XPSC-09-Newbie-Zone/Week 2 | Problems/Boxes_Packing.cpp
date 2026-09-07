#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int temp = arr[0];
    int unique = 0;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > temp) {
            temp = arr[i];
            if(unique > 1) ans = max(1, ans - unique);
        } else {
            ans++;
        }

        arr[i] == temp ? unique++ : unique = 0;
    }

    cout << ans;
    

    return 0;
}