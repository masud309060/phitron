#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> arr(n, 0);

    while (m > 0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i]++;
            m--;
            if(m == 0) break;
        }
    }

    for(auto x: arr) {
        cout << x << endl;
    }

    return 0;
}