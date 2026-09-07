#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }
    

    // cout << *s.begin() << endl;
    // cout << *(s.end() - 1) << endl;

    // string:: iterator == auto 
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;

    }
    
     
    return 0;
}