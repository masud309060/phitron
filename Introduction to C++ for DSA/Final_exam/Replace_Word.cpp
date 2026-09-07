#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;

        int s_size = s.size();
        int x_size = x.size();

        for (int i = 0; i <= s_size - x_size; i++)
        {

            if(s.substr(i, x_size) == x) {
                s.replace(i, x_size, "#");
                s_size -= x_size - 1;
            }
        }

        cout << s << endl;
    }
    

    return 0;
}