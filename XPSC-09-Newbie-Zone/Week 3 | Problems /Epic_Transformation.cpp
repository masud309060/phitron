#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;   
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        // solve problem by priority queue
        priority_queue<int> pq;
        for(auto [x, y]: mp) {
            pq.push(y);
        }

        while (pq.size() >= 2)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--;
            y--;
            if(x > 0) pq.push(x);
            if(y > 0) pq.push(y);
        }
        
        int ans = 0;
        if(!pq.empty()) ans = pq.top();

        cout << ans << endl;
 








        // ----------------------------------------------------

        // int mx_freq = 0;
        // for(auto [x, y]: mp) {
        //     mx_freq = max(mx_freq, y);
        // }

        // int ans = 0;
        // if(n % 2 == 0) {
        //     int mx_op = n / 2;
        //     if(mx_op <= mx_freq) {
        //         ans = (mx_freq - mx_op) * 2;
        //     }
        // } else {
        //     int mx_op = n / 2 + 1;
        //     if(mx_op <= mx_freq) {
        //         ans = (mx_freq - mx_op) * 2;
        //     }
        //     ans++;
        // }

        // cout << ans << endl;
    }

    return 0;
}