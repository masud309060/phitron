#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if(i % 2 == 1) {
            sum += arr[i];
        }
    }

    cout << sum;
    

    return 0;
}