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

        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        long long int avg = 0;
        avg = sum /n;
        if(sum % n != 0) {
            avg++;
        }
        long long int ans = sum / avg;

        cout << ans << endl;        
    }
    

    return 0;
}