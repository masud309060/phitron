#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4, 6, 7, 8, 9, 5};

    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << *next(l.begin(), 2) << endl;

    cout << *l.begin() << endl;

    return 0;
}