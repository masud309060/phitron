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

void printing_linked_list(Node* head) {
    Node* temp = head;
    while (head != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int size_of_linked_list(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}

// Insertion at Head
void insert_at_head(Node* &head, int val) {
    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

// Insertion at Tail 
void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Insertion at Specific Position 
void insert_at_any_position(Node* &head, int idx, int val) {
    Node* newNode = new Node(val);

    Node* temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;

    int s = size_of_linked_list(head);
    cout << "size : " << s << endl;

    insert_at_head(head, 100);
    insert_at_head(head, 200);

    insert_at_tail(head, tail, 2000);
    insert_at_tail(head, tail, 5000);

    insert_at_any_position(head, 2, 17);

    printing_linked_list(head);

    return 0;
}