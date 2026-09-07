#include <bits/stdc++.h>
using namespace std;


class Node {
    public:
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class MyQueue {
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        // O(1)
        void push(int val) {
            sz++;
            Node* newNode = new Node(val);
            if(head == NULL) {
                head = newNode;
                tail = newNode;
                return;
            }

            tail->next = newNode;
            tail = newNode;
        }

        // O(1)
        void pop() {
            sz--;
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;

            if(head == NULL) {
                tail = NULL;
            }
        }

        // O(1)
        int front() {
            return head->val;
        }

        // O(1)
        int back() {
            return tail->val;
        }

        // O(1)
        int size() {
            return sz;
        }

        // O(1)
        bool empty() {
            return head == NULL;
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

    // cout << numbers.front() << endl;
    // cout << numbers.back() << endl;
    // cout << numbers.size() << endl;
    

    while (!numbers.empty())
    {
        cout << numbers.front() << endl;
        numbers.pop();
    }

    return 0;
}