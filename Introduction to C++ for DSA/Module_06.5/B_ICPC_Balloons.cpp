#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        string s;
        cin >> s;

        s.resize(n);
        sort(s.begin(), s.end());

        int point = 0;
        char current_ch = ' ';
        
        for(char ch: s) {
            if(ch == current_ch) point++;
            else point += 2;

            current_ch = ch;
        }

        cout << point << endl;
    }
    
    

    return 0;
}