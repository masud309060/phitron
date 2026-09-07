#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, q;

    cin >> r >> c >> q;

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int t = 0; t < q; t++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int sum = 0;


        for (int i = x1; i <= x2; i++)
        {
            for (int j = y1; j <= y2; j++)
            {
                sum += arr[i][j];
            }
        }

        cout << sum << endl;
        
    }

    return 0;
}