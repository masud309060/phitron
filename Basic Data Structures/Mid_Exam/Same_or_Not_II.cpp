#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack {
    public:
        Node* head = NULL;
        Node* tail = NULL;

    void push(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail->next->prev = tail;
        tail = newNode;
    }

    void pop() {
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;

        if(tail == NULL) {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top() {
        return tail->val;
    }

    bool empty() {
        return head == NULL;
    }
};

class MyQueue {
    public:
        Node* head = NULL;
        Node* tail = NULL;

    void push(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail->next->prev = tail;
        tail = newNode;
    }

    void pop() {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;

        if(head == NULL) {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front() {
        return head->val;
    }

    bool empty() {
        return head == NULL;
    }
};


int main() {

    int n, m;
    cin >> n >> m;

    MyStack st;
    MyQueue qu;


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