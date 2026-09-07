#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int total_A = 0;
    int total_D = 0;

    for(char ch: s) {
        if(ch == 'A') total_A++;
        if(ch == 'D') total_D++;
    }

    if(total_A == total_D) {
        cout << "Friendship";
    } else if(total_A > total_D) {
        cout << "Anton";
    } else {
        cout << "Danik";
    }

    return 0;
}