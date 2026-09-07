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

void delete_from_any_position(Node* &head, Node* &tail, int idx) {
    Node* temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;

    // temp->next = deleteNode->next;
    // deleteNode->next->prev = temp;
    // or
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deleteNode; 
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_from_any_position(head, tail, 1);

    print_forward(head);
    

    return 0;
}