#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<string, string> oldIps;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        oldIps[b] = a;
    }

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        cout << a << " " << b << " ";

        b.pop_back();

        auto it = oldIps.find(b);
        if(it != oldIps.end()) {
            cout << "#" << it->second << endl;
        }
    }
    

    return 0;
}