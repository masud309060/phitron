#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int n;
        char ch;

        cin >> n;
        cin >> ch;

        string s(n, ch);

        for(char c: s) {
            cout << c << " ";
        }

        cout << endl;
    }
    

    return 0;
}