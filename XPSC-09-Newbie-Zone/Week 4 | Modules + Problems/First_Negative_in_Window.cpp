#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> new_arr;
    queue<int> q;
    int l = 0, r = 0;
    while (r < n - 1)
    {
        if(arr[r] < 0) {
            q.push(arr[r]);
        }

        if(r - l + 1 == k) {
            // first negetive integer 
            if(!q.empty()) {
                new_arr.push_back(q.front());
                if(arr[l] == q.front()) {
                    q.pop();
                }
            } else if(q.empty()) {
                new_arr.push_back(0);
            }
            
            l++, r++;
        } else {
            r++;
        }
    }

    for(int x: new_arr) {
        cout << x << " ";
    }
    

    

    return 0;
}