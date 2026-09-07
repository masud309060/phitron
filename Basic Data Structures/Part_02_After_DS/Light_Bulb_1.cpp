#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int total_zero = 0;
        int total_one = 0;
        for(char x: s) {
            if(x == '0') total_zero++;
            else total_one++;
        }
    
        int max_flip_zero = 0;
        for (int i = 0; i < n; i++)
        {
            int max_flip_zero_count = 0;
            for (int j = i; j <= k + i && j <= n; j++)
            {
                if(s[j] == '0') max_flip_zero_count++;
            }
            max_flip_zero = max(max_flip_zero, max_flip_zero_count);
        }

        int ans = total_one;
        if(max_flip_zero > 0) {
            ans = max(total_one, total_one - (k - max_flip_zero) + max_flip_zero);
        }

        cout << ans << endl;
    }
    
    

    return 0;
}
