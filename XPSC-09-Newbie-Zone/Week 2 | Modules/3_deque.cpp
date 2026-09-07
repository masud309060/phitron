#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq(n);

    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    dq.push_front(10); // O(1)
    dq.push_front(20); // O(1)
    dq.pop_front(); // O(1)


    for(int x: dq) {
        cout << x << " ";
    }
    cout << '\n';

    return 0;
}