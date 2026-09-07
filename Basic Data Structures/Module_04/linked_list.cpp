#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    a.push_back(10);

    cout << &a[4] << " " << &a[5];

    return 0;
}  