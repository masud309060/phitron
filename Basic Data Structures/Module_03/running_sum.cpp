#include <bits/stdc++.h>
using namespace std;

vector<int> running_sum(int n, vector<int> p) {
    for (int i = 1; i < n; i++)
    {
        p[i] =  p[i - 1] + p[i];
    }

    return p;
} 

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arr = running_sum(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}