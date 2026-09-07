#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    // mp.insert({10, 20});
    // mp.insert({11, 30});

    mp[1] = 2;
    mp[2] = 10;
    mp[12] = 2;
    mp[15] = 5;
    mp[6] = 9;
    mp[8] = 17;

    // cout << mp[10] << endl;
    // cout << mp[11] << endl;

    // for(auto [key, value]: mp) {
    //     cout << key << " -> " << value << endl;
    // }

    // for(auto it: mp) {
    //     int key = it.first, value = it.second;
    //     cout << key << " -> " << value << endl;
    // }

    // auto it = mp.find(22);
    // if(it == mp.end()) {
    //     cout << "Key not found" << "\n";
    // } else {
    //     cout << it->second;
    // }

    // by default add 24 key with value 0
    // cout << mp[24] << endl;

    // mp.erase(24);
    // auto it = mp.find(24); // O(logN)
    // if(it != mp.end()) {
    //     mp.erase(it); // O(logN)
    // }

    
    for(auto it: mp) {
        int key = it.first, value = it.second;
        cout << key << " -> " << value << endl;
    }
    
    // cout << mp.size() << endl;
    
    // auto it = mp.begin();
    // auto it = mp.rbegin();
    // cout << it->first << " -> " << it->second << '\n';

    // greater or equal = lower_bound(key);
    // auto it = mp.lower_bound(7);
    auto it = mp.upper_bound(9);

    cout << it->first << " -> " << it->second << endl;



    return 0;
}