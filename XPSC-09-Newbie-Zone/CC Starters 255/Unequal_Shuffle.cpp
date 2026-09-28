#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        int total_a_of_a = 0;
        int total_b_of_b = 0;

        for(char x: a) {
            if(x == 'a') total_a_of_a++;
        }

        for(char x: b) {
            if(x == 'b') total_b_of_b++;
        }

        if(total_a_of_a == total_b_of_b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}