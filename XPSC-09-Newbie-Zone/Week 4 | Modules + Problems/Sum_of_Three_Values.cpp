#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    vector<pair<int, int>> arr;
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        arr.push_back({x, i});   
    }

    sort(arr.begin(), arr.end());
    set<int> ans;

    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            long long sum = arr[i].first + arr[l].first + arr[r].first;
            if(sum == k) {
                ans.insert(arr[i].second);
                ans.insert(arr[l].second);
                ans.insert(arr[r].second);
                break;
            }

            if(sum > k) {
                // sum, k theke boro hole r-- korbo 
                // tahole sum kome ashbe, l++ korle sum aro bere jaito 
                r--;
            } else {
                l++;
            }
        }

        if(ans.size() == 3) break;
    }

    if(ans.size() == 3) {
        for(auto x: ans) cout << x << " ";
    } else {
        cout << "IMPOSSIBLE";
    }
    
    

    return 0;
}







