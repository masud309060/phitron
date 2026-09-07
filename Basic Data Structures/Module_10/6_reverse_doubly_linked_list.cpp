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

void print_forward(Node* head) {
    Node* temp = head;  

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse_doubly_linked_list(Node* head, Node* tail) {
    // Node *i = head, *j = tail;

    // while (true)
    // {
    //     if(i == j) break;
    //     if(i->next == j) break;

    //     swap(i->val, j->val);

    //     i = i->next;
    //     j = j->prev;
    // }

    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
    
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int x;
    while (cin >> x)
    {
        if(x == -1) break;
        insert_at_tail(head, tail, x);
    }

    print_forward(head);
    reverse_doubly_linked_list(head, tail);
    print_forward(head);
    
    return 0;
}