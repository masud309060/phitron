#include <bits/stdc++.h>
using namespace std;

int main() {
    int q; cin >> q;

    while (q--)
    {
        int n; cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count_state = 0;

        for (int i = 0; i < n; i++)
        {
            int left_smaller_element = 0;
            int right_greater_element = 0;

            for (int j = 0; j < n; j++)
            {
                if(i == j) continue;

                // left side element 
                if(j < i) {
                    if(arr[j] < arr[i]) {
                        left_smaller_element++;
                    }
                }

                // right site element
                if(j > i) {
                    if(arr[j] > arr[i]) {
                        right_greater_element++;
                    }
                }
            }

            if(left_smaller_element == right_greater_element) {
                count_state++;
            }
        }

        cout << count_state << endl;   

    }    

    return 0;
}