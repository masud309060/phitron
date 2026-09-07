#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;

    cin >> c;

    if(c >= '0' && c <= '9') {
        cout << "IS DIGIT";
    } else {
        cout << "ALPHA" << endl;

        if(c >= 'a' && c <= 'z') {
            cout << "IS SMALL";
        } else {
            cout << "IS CAPITAL";
        }
    }

    return 0;
}