#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // cout << v.capacity() << endl;
    v.push_back(10);
    v.push_back(20);
    // cout << v.capacity() << endl;
    v.push_back(30);
    // cout << v.capacity() << endl;
    v.push_back(40);
    // cout << v.capacity() << endl;
    v.push_back(50);
    v.push_back(60);


    // v.clear();
    // v.resize(10, 100);
    v.empty();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    

    return 0;
}