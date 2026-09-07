#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    list<int> l2;

    int val;
    while (cin >> val)
    {
        if(val == -1) break;
        l.push_back(val);
    }

    while (cin >> val)
    {
        if(val == -1) break;
        l2.push_back(val);
    }

    // for(int x: l) {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for(int x: l2) {
    //     cout << x << " ";
    // }
    // cout << endl;


    if(l.size() != l2.size()) {
        cout << "NO";
    } else {
        bool same = true;
    
        for (int i = 0; i < l.size(); i++)
        {
            if(*next(l.begin(), i) != *next(l2.begin(), i)) {
                same = false;
            }
        }

        if(same == true) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        
    }

    return 0;
}