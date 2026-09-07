#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min = INT_MAX;
    int min_index = 0;

    int max = INT_MIN;
    int max_index = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] < min) {
            min = arr[i];
            min_index = i;
        }

        if(arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }

    swap(arr[min_index], arr[max_index]);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
 
    

    return 0;
}