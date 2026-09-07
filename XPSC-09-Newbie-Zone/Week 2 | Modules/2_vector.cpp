#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // cout << v.size() << '\n';
    // v.pop_back();

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';
    

    // cout << v.size() << '\n';
    // cout << v.front() << '\n';
    // cout << v.back() << '\n';

    // v.clear();

    // cout << v.empty() << '\n';

    // int n;
    // cin >> n;
    // vector<int> v(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';


    // int n;
    // cin >> n;
    // vector<int> v;
    // v.assign(n, -1);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';

    int n;
    cin >> n;
    vector<int> v;
    v.resize(10);

    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';

    // reverse(v.begin(), v.end());
    // sort(v.begin(), v.end(), greater<int>());

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << '\n';


    // iterator 
    // auto it = v.begin();
    // cout << *it << '\n';

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // auto min_el = min_element(v.begin(), v.end());
    // cout << *min_el << endl;
    // auto max_el = max_element(v.begin(), v.end());
    // cout << *max_el << endl;
    // int max_el_position = max_el - v.begin();
    // cout << max_el_position << endl;
    


    return 0;
}