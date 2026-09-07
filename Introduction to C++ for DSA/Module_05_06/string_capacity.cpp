#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s = "Hello World Masud";

    // s.clear();
    s.resize(10, '.');

    cout << s << endl;
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;


    if(s.empty() == true) {
        cout << "Empty" << endl;
    } else {
        cout << "Not Empty" << endl;
    }

    return 0;
}