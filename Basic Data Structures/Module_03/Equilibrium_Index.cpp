#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }



    int index;
    for (int i = 0; i < n; i++)
    {
        int left_sum = 0;
        int right_sum = 0;

        for (int j = 0; j < i; j++)
        {
            left_sum += arr[j];
        }

        for (int j = i + 1; j < n; j++)
        {
            right_sum += arr[j];
        }

        if(left_sum == right_sum) {
            index = i;
            break;
        }
        
        // cout << left_sum << " " << right_sum << endl;
    }

    cout << index;
    


    return 0;
}