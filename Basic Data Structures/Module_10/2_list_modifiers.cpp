#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {10, 20, 30};
    list<int> l2;

    // l2 = l;
    l2.assign(l.begin(), l.end());

    // l2.push_front(50);
    // l2.push_back(100);

    // l2.pop_back();
    // l2.pop_back();

    // l2.pop_front();
    // cout << *next(l2.begin(), 2) << endl;

    // l2.insert(next(l2.begin(), 2), 100);

    list<int> l3 = {100, 200};
    // l2.insert(next(l2.begin(), 2), l3.begin(), l3.end());
    // l2.erase(next(l2.begin(), 2), next(l2.begin(), 3));


    // replace(l2.begin(), l2.end(), 20, 200);

    auto it = find(l2.begin(), l2.end(), 400);

    if(it != l2.end()) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    for(int val: l2) {
        cout << val << endl;
    }



    return 0;
}