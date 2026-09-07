#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());    

    while (q--)
    {
        int x;
        cin >> x;

        int flag = 0;
        int startIndex = 0;
        int endIndex = n - 1;
       
        int middleIndex;
        while (startIndex <= endIndex)
        {
            middleIndex = (startIndex + endIndex) / 2;
            if(arr[middleIndex] == x) {
                flag = 1;
                break;
            } else if(arr[middleIndex] < x) {
                startIndex = middleIndex + 1;
            } else {
                endIndex = middleIndex - 1;
            }
        }
        

        if(flag == 1) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        } 
    }
    

    return 0;
}