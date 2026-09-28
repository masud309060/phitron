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

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, int> seg;
        seg.insert({arr[0], 1});

        int ans = 1;
        map<int, int> checked_seg = seg;
        map<int, int> cur_seg;
        
        int i = 1;
        while (i < n)
        {
            
            if(checked_seg.find(arr[i]) != checked_seg.end()) {
                checked_seg.erase(arr[i]);
            }

            cur_seg[arr[i]]++;
            i++;

            if(checked_seg.empty()) {
                checked_seg = cur_seg; 
                cur_seg.clear();
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}