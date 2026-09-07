#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) 
    {
        int n;
        cin >> n;
        
        int flag = 1;
        if(n == 1) flag = 0;

        int loop = sqrt(n);
        for (int i = 2; i <= loop; i++)
        {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }

        if(flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        t--;
    }
    
    

    return 0;
}