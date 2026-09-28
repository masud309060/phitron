#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        deque<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // cout << arr.front()  << " " <<  arr.back();

        int hit = 0;
        while (arr.size() > 0)
        {
            if(arr.size() == 1) {
                hit++;
                break;
            }

            int minIndex = 0;
            int minValue = INT_MAX;
            for (int i = 0; i < arr.size(); i++)
            {
                if(arr[i] <= minValue) {
                    if(arr[i] == minValue && (minIndex == 0 || minIndex == arr.size() - 1)) {

                    } else {
  minIndex = i;
                    minValue = arr[i];
                    }
                  
                }
            }

            // cout << "minIndex" << minIndex << endl;

            if(minIndex == 0) {
                arr.pop_front();
                if(arr.size() > 0) arr[0]--;
                if(arr.size() > 0 && arr[0] == 0) arr.pop_front();
            } else if(minIndex == arr.size() - 1) {
                arr.pop_back();
                if(arr[arr.size() - 1] > 0) arr[arr.size() - 1]--;
                if(arr[arr.size() - 1] == 0 && arr.size() > 0) arr.pop_back();
            } else {
                arr[minIndex] = 0;
                arr[minIndex - 1]--;
                arr[minIndex + 1]--;
            }

            // for(auto x: arr) {
            //     cout << x << " ";
            // }

            // cout << endl;

            hit++;
        }

        cout << hit << endl;
    }
    

    return 0;
}