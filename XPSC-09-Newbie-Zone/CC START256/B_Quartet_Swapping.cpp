// 2101B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i += 2)
        {
            for (int j = i + 2; j < n; j += 2)
            {
                if(arr[j] < arr[i]) {
                    swap(arr[j], arr[i]);
                }
            }
        }

        for (int i = 1; i < n; i += 2)
        {
            for (int j = i + 2; j < n; j += 2)
            {
                if(arr[j] < arr[i]) {
                    swap(arr[j], arr[i]);
                }
            }
        }

        for(int x: arr) {
            cout << x << " ";
        }

        cout << endl;
           
    }
    

    return 0;
}