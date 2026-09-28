#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> a_dis(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    set<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(a[i]);
        a_dis[i] = st.size();
    }

    for (int i = 0; i < m; i++)
    {
        int pos;
        cin >> pos;

        cout << a_dis[pos - 1] << endl;
    }

    return 0;
}