#include <bits/stdc++.h>
using namespace std;


class MyQueue {
    public:
        list<int> l;

        // O(1)
        void push(int val) {
            l.push_back(val);
        }

        // O(1)
        void pop() {
            l.pop_front();
        }

        // O(1)
        int front() {
            return l.front();
        }

        // O(1)
        int back() {
            return l.back();
        }

        // O(1)
        int size() {
            return l.size();
        }

        // O(1)
        bool empty() {
            return l.empty();
        }
};

int main() {
    MyQueue numbers;
    int n; cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val; 
        cin >> val;
        numbers.push(val);
    }
    

    while (!numbers.empty())
    {
        cout << numbers.front() << endl;
        numbers.pop();
    }

    return 0;
}