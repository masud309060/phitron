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

        int lastIndex = -1;
        map<int,bool> mp;
        
        for (int i = n - 1; i >= 0; i--)
        {
            if(mp[arr[i]] == true) {
                lastIndex = i;
                break;
            } else {
                mp[arr[i]] = true;
            }
        }

        cout << lastIndex + 1 << endl;
    }
    
    return 0;
}