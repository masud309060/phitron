#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;

        cin >> n >> k >> s;

        vector<int> freq(26, 0);
        for(char ch: s) {
            freq[ch - 'a']++;
        }

        int odd_char = 0;
        for (int i = 0; i < 26; i++)
        {
            if(freq[i] % 2 == 1) odd_char++;
        }

        // after remove 
        odd_char -= k;

        if(odd_char <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    

    return 0;
}