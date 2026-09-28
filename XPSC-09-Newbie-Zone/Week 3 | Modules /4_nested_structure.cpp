#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // vector<set<int>> v;
    // vector<multiset<int>> v;

    // map<vector<int>, int> mp;
    // vector<int> a;
    // a.push_back(1);
    // a.push_back(5);
    // a.push_back(2);
    // a.push_back(4);

    // mp[a] = 5;

    // for(auto [x, y]: mp) {
    //     vector<int> v = x;
    //     for(int val: v) {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    //     cout << y << endl;
    // }

    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(2);
    s1.insert(3);
    s1.insert(2);

    set<int> s2;
    s2.insert(8);
    s2.insert(12);
    s2.insert(6);

    set<int> s3;
    s3.insert(12);
    s3.insert(31);
    s3.insert(9);
    s3.insert(5);
    s3.insert(7);
    s3.insert(7);

    mp[1] = s1;
    mp[5] = s2;
    mp[12] = s3;

    for(auto [x, y]: mp) {
        cout << x << endl;
        for(int val: y) {
            cout << val << " ";
        }
        cout << endl;
    }

    // lower bound under another lower bound 
    int x = 6, y = 80;
    auto LB1 = mp.lower_bound(x);
    if(LB1 != mp.end()) {
        int val = LB1->first;
        cout << val << " ";

        auto LB2 = mp[val].lower_bound(y);
        if(LB2 != mp[val].end()) {
            int val = *LB2;
            cout << val;
        } else {
            cout << "None";
        }
        cout << endl;
    } else {
        cout << "Not Exist" << endl;
    }

    return 0;
}