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

    int q;
    cin >> q;
    
    while (q--)
    {
        int x;
        cin >> x;

        int left = 0;
        int righ = n - 1;
        int flag = 0;

        for (int i = 0; left <= righ; i++)
        {
            int mid = (left + righ) / 2;
            if(arr[mid] == x) {
                flag = 1;
                break;
            } else if(arr[mid] < x) {
                left = mid + 1;
            } else {
                righ = mid - 1;
            }
        }

        if(flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }        

    }

    

    return 0;
}