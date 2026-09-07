#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int s = sum - arr[i];
            if(s % 2 == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    

    return 0;
}