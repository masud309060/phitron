#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    multimap<int, int> ml;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        ml.insert({x, i});
    }
    
    auto l = ml.begin(), r = --ml.end();
    while (l != r)
    {
        long long sum = l->first + r->first;
        if(sum == k) {
            cout << l->second << " " << r->second;
            return 0;
        }

        if(sum < k) {
            l++;
        } else {
            r--;
        }
    }

    cout << "IMPOSSIBLE";
    

    return 0;
}