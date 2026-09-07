#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        
        int match_count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = arr[i];
                int y = arr[j];
                int z = (sum - x - y) / 2;

                int total_seat = x + y + z;
                if(total_seat > k) {
                    match_count++;
                }
            }
        }

        cout << match_count << endl;
        
    }
    

    return 0;
}