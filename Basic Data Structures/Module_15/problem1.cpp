#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;
        
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            st.push(val);
        }

        cout << x << " ";
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }

        cout << endl;     
    }
    
    

    return 0;
}