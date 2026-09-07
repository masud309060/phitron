#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    // if k is present then print -1 
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        cout << "-1";
    } else {

        int count = 0;
        for (int i = 0; i < k; i++)
        {

            // check i is preset or not 
            int present = 0;
            for (int j = 0; j < n; j++)
            {
                if(arr[j] == i) {
                    present = 1;
                    break;
                }
            }

            if(present == 0) {
                count++;
            }  
        }

        cout << count;
    }

    return 0;
}