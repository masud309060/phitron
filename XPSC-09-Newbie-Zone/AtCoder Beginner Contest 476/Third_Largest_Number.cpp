#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    multiset<int> ml;
    ml.insert({arr[0]});
    ml.insert({arr[1]});

    for (int i = 2; i < n; i++)
    {
        ml.insert({arr[i]});

        auto it = ml.end();
        it--;
        it--;
        it--;
        cout << *it << endl;
    }

    return 0;
}