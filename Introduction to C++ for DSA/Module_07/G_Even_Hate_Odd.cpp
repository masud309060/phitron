#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(n % 2 != 0) {
            cout << "-1";
        } else {
            int odd = 0;
            int even = 0;

            for (int i = 0; i < n; i++)
            {
                if(arr[i] % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }

            int mn = min(odd, even);
            int op = (n/2) - mn;

            cout << op;
        }

        cout << endl;
    }
    

    return 0;
}