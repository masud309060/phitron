#include <bits/stdc++.h>
using namespace std;

int* fun() {

    int *a = new int[5];

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    return a;    
}

int main() {
    int *x = fun();

    for (int i = 0; i < 10; i++)
    {
        cout << x[i] << " ";
    }
    

    return 0;
}