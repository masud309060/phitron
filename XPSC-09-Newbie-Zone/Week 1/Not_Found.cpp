#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector freq(27, 0);

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = NULL;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] == 0) {
            ans = i + 'a';
            break;
        }
    }

    if(ans != NULL) cout << ans;
    else cout << "None";
    
    return 0;
}