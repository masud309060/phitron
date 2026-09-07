#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2,3, 4, 2, 6, 8};
    vector<int> v2;

    v2 = v;


    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    // v2.pop_back();
    // v2.pop_back();

    // v2.insert(v2.begin() + 2, 10);

    // vector<int> v3 = {200, 300, 400};
    // v2.insert(v2.begin() + 2, v3.begin(), v3.end());

    // v2.erase(v2.begin() + 2);
    // v2.erase(v2.begin() + 1, v2.begin() + 5);


    // replace(v2.begin(), v2.end(), 2, 100);

    // auto it = find(v2.begin(), v2.end(), 2);
    // cout << *it << endl;

    // cout << v2.front() << endl;
    // cout << v2[0] << endl;

    // cout << v2.back() << endl;
    // cout << v2[v2.size() - 1] << endl;
    
    // for(int x: v2) {
    //     cout << x << " ";
    // }

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    
    

    return 0;
}