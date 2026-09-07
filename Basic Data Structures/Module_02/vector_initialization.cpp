#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector<int> v; // type 1
    // vector<int> v(5); // type 2
    vector<int> v(5, -1); // type 3
    // vector<int> v2(v); // type 4 

    // int a[5] = {1, 2, 3, 4, 5};
    // vector<int> v2(a, a+3); // type 5
    vector<int> v3 = {1, 2, 3, 4, 5}; // type 6

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    

    cout << endl << v[1] << endl;


    return 0;
}