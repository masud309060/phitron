#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int max = n;
    int min = 1;
    for (int i = 1, j = n; i <= n; i++)
    {
        if(i % 2 == 0) {
            cout << max;
            max--;
        } else {
            cout << min;
            min++;
        }

        cout << " ";
    }
    

    return 0;
}