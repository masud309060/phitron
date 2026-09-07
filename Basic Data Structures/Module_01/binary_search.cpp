#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if(x == arr[i]) {
                flag = 1;
                break;
            }
        }

        if(flag == 1) {
            cout << "Found" << endl;
        } else {
            cout << "Not Found" << endl;
        }
        
    }
    



    return 0;
}