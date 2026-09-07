#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int size = s.size();

    int sum_of_odd = 0;
    int sum_of_even = 0;

    bool odd = true;
    for (int i = size - 1; i >= 0; i--)
    {
        int val = s[i] - '0';
        if(odd) {
            sum_of_odd += val;
        } else {
            sum_of_even += val;
        }

        if(odd == true) odd = false;
        else odd = true; 
    }

    int divided = sum_of_odd - sum_of_even;

    if(divided % 11 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}