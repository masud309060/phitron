#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, k, y;
    cin >> x >> k >> y;

    int flag = 0;
    for (int i = 1; i <= x; i++)
    {
        if(i * k == y) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    

    return 0;
}