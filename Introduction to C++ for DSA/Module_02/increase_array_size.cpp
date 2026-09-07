#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1;
    
    cin >> n1;
    int *arr = new int[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }

    int n2;
    cin >> n2;

    int *arr2 = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        arr2[i] = arr[i];
    }

    delete[] arr;

    for (int i = n1; i < n2; i++)
    {
        cin >> arr2[i];
    }


    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    
    
    
    

    return 0;
}