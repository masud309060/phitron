#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, string>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }


    vector<pair<string, string>> new_arr;
    for (auto el: arr)
    {

        bool has_already = false;
        for (int i = 0; i < new_arr.size(); i++)
        {
            if(new_arr[i].first == el.first && new_arr[i].second == el.second) {
                has_already = true;
            }
        }

        if(has_already == false) {
            new_arr.push_back(el);
        }
    }

    cout << new_arr.size();
    
    

    return 0;
}