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

        deque<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if(abs(arr[j] - arr[j + 1]) > 1 && arr[j + 1] < arr[j]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        
        for(int x: arr) {
            cout << x << " ";
        }

        cout << endl;   
    }
    

    return 0;
}