#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it = s.begin(); 
    // cout << *it << endl;

    for(auto x: s) {
        cout << x << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    // auto it = s.find(8  );
    // if(it != s.end()) {
    //     cout << "Found" << endl;
    // } else {
    //     cout << "Not Found" << endl;
    // }


    s.erase(4);

    cout << s.count(10);

    return 0;
}