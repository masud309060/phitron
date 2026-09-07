#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int flag = 0;
        int count = 0;
        for(char x: s) {
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
                count = 0;
            } else {
                count++;
            }

            if(count == 4) {
                flag = 1;
                break;
            }
        }
        
        if(flag == 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    

    return 0;
}