#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        cin >> r >> c;

        char arr[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }            
        }

        int cnt = 0;
        for (int i = 0; i < r - 1; i++)
        {
            for (int j = 0; j < c; j++)
            {
                for (int k = 1; k + i < r && k + j < c; k++)
                {
                    if (
                        arr[i][j] == arr[i][j + k] && 
                        arr[i][j] == arr[i + k][j] && 
                        arr[i][j] == arr[i + k][j + k]
                    ) {
                        cnt++;
                    }
                }
            }
        }

        cout << cnt << endl;
        
    }
    

    return 0;
}