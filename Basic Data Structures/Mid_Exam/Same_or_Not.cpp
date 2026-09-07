#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> qu;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        qu.push(val);
    }

    bool same = true;
    if(n != m) {
        same = false;
    } else {
        while (!st.empty())
        {
            if(st.top() != qu.front()) {
                same = false;
                break;
            }

            st.pop();
            qu.pop();
        }
    }

    if(same == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    

    return 0;
}