#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    queue<int> q;
    while (t--)
    {
        int n;
        cin >> n;
        if(n == 1) {
            int order;
            cin >> order;
            q.push(order);
        } else {
            if(q.empty()) {
                cout << -1 << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    

    return 0;
}