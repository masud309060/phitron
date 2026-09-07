#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        string first3 = s;
        string last3 = s;

        first3.erase(3, 3);
        last3.erase(0, 3);

        int sum1 = 0;
        int sum2 = 0;

        for(char ch: first3) {
            sum1 += ch - '0';
        }

        for(char ch: last3) {
            sum2 += ch - '0';
        }

        sum1 == sum2 ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    

    return 0;
}