#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int f_blue_index = s.find('B');
        int l_blue_index = s.rfind('B');

        int ans = l_blue_index - f_blue_index + 1;
        cout << ans << endl;
    }

    return 0;
}