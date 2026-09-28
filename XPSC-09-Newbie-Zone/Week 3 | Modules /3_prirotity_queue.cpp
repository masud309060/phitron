#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // priority_queue<int> pq;

    // pq.push(5);
    // pq.push(5);
    // pq.push(6);
    // pq.push(3);
    // pq.push(1);
    // pq.push(2);
    // pq.push(3);

    // cout << "size = " << pq.size() << endl;

    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    // cout << endl;

    // cout << "size = " << pq.size() << endl;


    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(5);
    pq.push(6);
    pq.push(3);
    pq.push(1);
    pq.push(2);
    pq.push(3);

    cout << "size = " << pq.size() << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    cout << "size = " << pq.size() << endl;
    

    return 0;
}