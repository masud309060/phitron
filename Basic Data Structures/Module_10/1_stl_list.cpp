#include <bits/stdc++.h>
using namespace std;

int main() {
    // list<int> l; // declare l list
    // list<int> l(10); // declare 10 size of l list with garbage values


    // list<int> l(10, 2); // declare 10 size of l list value.
    list<int> l2 = {1, 2, 3, 4, 5, 6, 7, 8};
    int a[] = {3, 4, 5};
    vector<int> v = {10, 20, 30};
    // list<int> l(a, a + 3);
    list<int> l(v.begin(), v.end());


    // l.clear();

    if(l.empty()) {
        cout << "Empty" << endl;
    } else {
        cout << "Not Empty" << endl;
    }

    l.resize(6, 100);

    cout << "size: " << l.size() << endl;


    for(int val: l) {
        cout << val << endl;
    }

    return 0;
}