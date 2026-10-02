#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        deque<int> dq;
        for (int i = 1; i <= n; i++)
        {
            dq.push_back(i);
        }

        int sec = 1;
        while (dq.size() >= 2)
        {
            int first = dq.front();
            dq.pop_front();

            if(first == n) break;
            if(dq.size() == 1) {
                sec++;
                continue;
            }

            int second = dq.front();
            dq.pop_front();

            int third = dq.front();
            dq.pop_front();

            if(third == n) break;

            dq.push_front(second);
            sec++;
        }

        cout << sec << endl;
        
        
    }
    

    return 0;
}