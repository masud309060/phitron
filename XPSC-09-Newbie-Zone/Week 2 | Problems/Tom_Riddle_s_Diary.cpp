#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<string, int> mp;

    for(string x: arr) {
        if(mp[x] != 1) {
            cout << "NO";
            mp[x] = 1;
        } else {
            cout << "YES";
        }

        cout << endl;
    }
    

    return 0;
}