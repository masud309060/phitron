#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());    

    while (q--)
    {
        int val;
        cin >> val;

        int l = 0;
        int r = n - 1;

        bool found = false;
        while (l < r)
        {
            int m = l + r / 2;
            int midValue = arr[m];

            if(midValue == val) {
                found = true;
                break;
            } else if(val > midValue) {
                l = m;
            } else if(val < midValue) {
                r = m;
            }
        }
        
        if(found == true) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }

    }
    
    

    return 0;
}