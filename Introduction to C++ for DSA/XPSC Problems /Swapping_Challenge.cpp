#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int sorted_arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sorted_arr[i] = arr[i];
    }

    // make array sort (ascending)
    sort(sorted_arr, sorted_arr + n);

    int middle_index = (n - 1)/2;
    int middle_value = sorted_arr[middle_index];

    int middle_value_current_index;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == middle_value) {
            middle_value_current_index = i;
            break;
        }
    }


    int min_swap = abs(middle_index -  middle_value_current_index);

    cout << min_swap;

    return 0;
}