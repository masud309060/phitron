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

        vector<pair<int, int>> result;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if(abs(arr[i] - arr[j]) >= abs(i - j)) {
                    swap(arr[i], arr[j]);
                    result.push_back({arr[i], arr[j]});
                }
            }
        }
        
        cout << result.size() << endl;
        for(auto move: result) {
            cout << move.first << " " << move.second << endl;
        }        
        
    }
    
    

    return 0;
}