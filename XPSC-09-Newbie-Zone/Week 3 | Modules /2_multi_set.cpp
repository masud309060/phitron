#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it = s.begin(); 
    // it++;
    // it++;
    // cout << *it << endl;

    for(auto x: s) {
        cout << x << " ";
    }
    cout << endl;
    cout << endl;

    // auto it = s.find(5);
    // if(it != s.end()) {
    //     cout << "Found" << endl;
    // } else {
    //     cout << "Not Found" << endl;
    // }


    // s.erase(5);
    // O(logn + k)
    auto it = s.find(5);
    s.erase(it);
    // O(2long)

    for(auto x: s) {
        cout << x << " ";
    }
    cout << endl;

    cout << s.count(5);

    return 0;
}