#include <bits/stdc++.h>
using namespace std;

int main() {
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

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            if(i == 0) {
                // previous nai 
                // puro operation e korte hobe 
                ans += abs(arr[i]);
            } else {
                if(arr[i] < 0 && arr[i - 1] < 0) {
                    // same sign - - 
                    // puro operation e korte hobe 
                    ans += abs(arr[i]);
                } else if(arr[i] > 0 && arr[i - 1] > 0) {
                    // same sign + + 
                    // puro operation e korte hobe 
                    ans += abs(arr[i]);
                } else {
                    int help = abs(arr[i - 1]);
                    if(help < abs(arr[i])) {
                        ans += abs(arr[i]) - help;
                    }
                }
            }
        }
        

        cout << ans << endl;
    }
    

    return 0;
}