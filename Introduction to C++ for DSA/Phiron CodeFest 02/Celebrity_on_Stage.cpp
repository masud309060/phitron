#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int my_index = k - 1;
    int infront_me = 0;
    int behind_me = 0;

    for (int i = 0; i < my_index; i++)
    {
        if(arr[i] > arr[my_index]) {
            infront_me++;
        }
    }

    for (int i = my_index; i < n; i++)
    {
        if(arr[i] < arr[my_index]) {
            behind_me++;
        }
    }

    cout << infront_me << " " << behind_me;
    
    

    return 0;
}