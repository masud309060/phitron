#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t;
    cin >> s >> t;

    int a = 0, b = 0, c = 0;

    int ans = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                if(i + j + k <= s && i * j * k <= t) {
                    ans++;
                }
            }   
        }
    }

    cout << ans;
    

    return 0;
}