#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    // Reverse of B
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(b[i], b[j]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] + b[i] << " ";
    }    
    

    return 0;
}