#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;

    // vector<int> arr(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // sort(arr.begin(), arr.end());

    // int day = 1;
    // for(int x: arr) {
    //     if(x >= day) {
    //         day++;
    //     }
    // }

    // cout << day - 1;

    int n;
    cin >> n;

    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    int ans = 0;
    int problems = 1;

    while (!ml.empty())
    {
        auto LB = ml.lower_bound(problems);
        if(LB != ml.end()) {
            problems++;
            ml.erase(LB);
        } else {
            break;
        }

        ans++;
    }

    cout << ans;
    
    return 0;
}