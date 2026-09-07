#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;


    while (q--)
    {
        int n;
        cin >> n;

        
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int waiting_max[n];
        waiting_max[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            waiting_max[i] = max(waiting_max[i - 1], arr[i]);
        }

        int total_waiting = 0;
        for (int i = 0; i < n; i++)
        {
            int wait = waiting_max[i] - arr[i];
            total_waiting += wait;
        }

        cout << total_waiting << endl;
        
    }
    

    return 0;
}