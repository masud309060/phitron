#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;

        stack<char> st;

        for(char ch : s) {

            if(st.empty()) {
                st.push(ch);
                continue;
            }

            if(st.top() != ch) {
                st.pop();
            } else {
                st.push(ch);
            }
        }

        if(st.empty() == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
    

    return 0;
}