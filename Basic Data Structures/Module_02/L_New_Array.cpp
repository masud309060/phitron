#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> b[i];
    }

    vector<int> c(b);

    for(int x: a) { 
        c.push_back(x);
    }

    for(int x: c) {
        cout << x << " ";
    }

    return 0;
}

// O(N)