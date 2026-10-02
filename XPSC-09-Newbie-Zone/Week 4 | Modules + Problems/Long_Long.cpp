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

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        long long sum = 0;
        long long cnt = 0;
        bool open = false;
        for (int i = 0; i < n; i++)
        {
            sum += abs(arr[i]);

            if(arr[i] < 0 && open == false) {
                open = true;
                cnt++;
            }

            if(arr[i] > 0) {
                open = false;
            }
        }

        cout << sum << " " << cnt << endl;
    }
    
    return 0;
}