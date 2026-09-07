#include <bits/stdc++.h>
using namespace std;


int main() {
    list<int> l;

    int val;
    while (cin >> val)
    {
        if(val == -1) break;
        l.push_back(val);
    }

    bool palindrom = true;
    for (int i = 0, j = l.size() - 1; i <= j; i++, j--)
    {
        cout << *next(l.begin(), i) << " " << *next(l.begin(), j) << endl;
        if(*next(l.begin(), i) != *next(l.begin(), j)) {
            palindrom = false;
            break;
        }
    }

    if(palindrom == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}