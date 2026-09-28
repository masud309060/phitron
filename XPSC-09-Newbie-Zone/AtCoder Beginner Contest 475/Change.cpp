#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int yen100 = 0;
    long long int yen10 = 0;
    long long int yen1 = 0;

    for (int i = 0; i < n; i++)
    {
        long long int total_need_1000 = (arr[i]/1000) + 1;
        
        long long int getback = (1000 * total_need_1000) - arr[i];
        long long int y_100 = getback / 100;
        getback = getback - (y_100 * 100);

        long long int y_10 = getback / 10;
        getback = getback - (y_10 * 10);

        long long int y_1 = getback;

        yen100 += y_100;
        yen10 += y_10;
        yen1 += y_1;
    }

    cout << yen1 << " " << yen10 << " " << yen100;

    return 0;
}