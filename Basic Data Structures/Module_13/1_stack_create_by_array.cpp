#include <bits/stdc++.h>
using namespace std;

class MyStack {
    public:
        vector<int> v;

        void push(int val) {
            v.push_back(val);
        }

        void pop() {
            v.pop_back();
        }

        int top() {
            return v.back();
        }

        int size() {
            return v.size();
        }

        bool empty() {
            return v.empty();
        }
};

int main() {
    MyStack numbers;
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);

    cout << "top: " << numbers.top() << endl;
    numbers.pop();
    cout << "top: " << numbers.top() << endl;
    numbers.pop();
    cout << "top: " << numbers.top() << endl;
    // numbers.pop();
    if(numbers.empty() == false) {
        cout << "top: " << numbers.top() << endl;
    }


    return 0;
}