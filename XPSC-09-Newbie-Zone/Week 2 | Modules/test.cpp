#include <bits/stdc++.h>
using namespace std;

int main() {

    map<int, int> mp;
    // insert - mp.insert({25, "rahim"}) || mp[25] = "rahim";
    mp.insert({1, 10});
    mp[2] = 20;
    mp[5] = 15;

    // cout << mp[1] << endl;

    // begin - iterator to the first element 
    // cout << (*mp.begin()).first << endl;
    // cout << (*mp.begin()).second << endl;

    // end - iterator to the after the last element 

    // mp[10] = 100;
    // if(mp.find(10) != mp.end()) {
    //     cout << mp[10] << endl;
    // }
    
    // for(auto it: mp) {
    //     auto x = it.first;
    //     auto y = it.second;
    //     cout << y << " ";
    // }
    // cout << endl;
    // auto it = mp.begin();
    // it++;
    // cout << it->first << endl;



    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << " - " << i->second << endl;
    }

    // mp.erase(1);

    // find - find an element iterator 
    // auto it = mp.find(1);
    // cout << it->first << " " << it->second << endl;

    // cout << mp.size() << endl;
    // cout << mp.empty() << endl;
    // mp.clear();
    // cout << " --------------- " << endl;
    // cout << mp.size() << endl;
    // cout << mp.empty() << endl;

    // for(auto [x, y]: mp) {
    //     cout << x << " " << y << endl;
    // }

    // auto it = mp.lower_bound(2);
    // auto it = mp.upper_bound(1);
    auto it = mp.end();
    it--;

    cout << it->first << " " << it->second << endl;

    return 0;
}