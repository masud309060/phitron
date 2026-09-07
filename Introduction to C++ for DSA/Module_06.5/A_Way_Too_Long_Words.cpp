#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int size = s.size();

        if(size > 10) {
            cout << s[0] << size - 2 << s[size - 1];
        } else {
            cout << s;
        }

        cout << endl;
    }
    

    return 0;
}