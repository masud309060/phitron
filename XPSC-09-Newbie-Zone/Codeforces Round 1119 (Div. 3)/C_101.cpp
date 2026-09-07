#include <bits/stdc++.h>
using namespace std;

int main() {
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

        int f = -1;
        int fi = -1;
        int l = -1;
        int li = -1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 1) {
                f = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if(arr[i] == 1 || arr[i] == -1) {
                l = i;
                break;
            }
        }

        for (int i = f; i < l; i++)
        {
            if(arr[i] == -1) arr[i] = 0;
        }

        if(f != -1) arr[f] = 1;
        if(l != -1) arr[l] = 1;

        
        
        
        for (int i = 1; i < n - 1; i++)
        {
            if(arr[i - 1] == 0 && arr[i] == -1 && arr[i + 1] == 0) {
                arr[i] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if(arr[i] == -1) arr[i] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
    

    return 0;
}