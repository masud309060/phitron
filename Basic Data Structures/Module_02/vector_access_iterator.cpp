#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3,4 ,5 ,6};

    v[1]  = 100;

    // cout << v[1] << endl;
    // cout << v.front() << endl;
    // cout << v.back() << endl;

    // vector<int>::iterator it = v.begin();
    auto it = v.begin();

    while (it != v.end())
    {
        cout << *it << " ";
        it++;
    }
    

    return 0;
}