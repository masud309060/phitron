#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int s_total = 0;
    int d_total = 0;
    while (!arr.empty())
    {
        int left = arr.front(), right = arr.back();
        // Sereja
        if(left > right) {
            s_total += left;
            arr.pop_front();
        } else {
            s_total += right;
            arr.pop_back();
        }

        if(arr.empty()) break;
        
        // Dima
        if(left > right) {
            d_total += left;
            arr.pop_front();
        } else {
            d_total += right;
            arr.pop_back();
        }
    }

    cout << s_total << " " << d_total;
    
    return 0;
}