#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr;
    
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        arr.push_back(s);
    }

    map<string, int> mp;
    vector<string> ans;

    for (int i = n - 1; i >= 0; i--)
    {
        if(mp[arr[i]] != 1) {
            ans.push_back(arr[i]);
            mp[arr[i]] = 1;
        }
    }

    for(string x: ans) {
        cout << x << endl;
    }

    return 0;
}