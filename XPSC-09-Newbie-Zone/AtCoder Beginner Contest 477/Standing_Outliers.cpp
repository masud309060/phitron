#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if(i == j) continue;
            if(abs(arr[i] - arr[j]) < d) {
                flag = 0;
                break;
            }
        }

        if(flag == 1) ans.push_back(i + 1);   
    }

    cout << ans.size() << endl;

    for(int x: ans) {
        cout << x << " ";
    }
    
    

    return 0;
}