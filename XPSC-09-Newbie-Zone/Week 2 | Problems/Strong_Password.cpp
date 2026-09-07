#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int index = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i - 1]) {
                index = i;
                break;
            }
        }

        char x = s[index] == 'z' ? 'a' : s[index] + 1;
        s.insert(s.begin() + index, x);

        cout << s << endl;
    }
    

    return 0;
}