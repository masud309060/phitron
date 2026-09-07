#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={2,2,4,4};
    v.resize(2);
    v.resize(4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    

    return 0;
}