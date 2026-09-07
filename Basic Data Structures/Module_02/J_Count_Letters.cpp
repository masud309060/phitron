#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> fre(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        fre[s[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(fre[i] > 0) {
            cout << char('a' + i) << " " << ":" << " " << fre[i] << endl;
        }
    }

    return 0;
}

// O(N)