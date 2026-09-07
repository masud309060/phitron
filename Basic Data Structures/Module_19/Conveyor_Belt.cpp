#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, p;
        string s;
        cin >> n >> p >> s;

        int left = 0;
        int right = 0;

        for (int i = 0; i < p; i++)
        {
            if(s[i] != 'L') left++;
        }

        for (int i = p - 1; i < n; i++)
        {
            if(s[i] != 'R') right++;
        }
        
        // cout << left << " " << right << endl;
        cout << min(left, right) << endl;
    }
    

    return 0;
}