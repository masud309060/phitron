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

void printing_linked_list(Node* head) {
    Node* temp = head;
    while (head != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main() {
    int val;

    Node* head = NULL;
    Node* tail = head;

    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }
    
    
    // printing_linked_list(head);
    int size = size_of_linked_list(head);

    cout << size;

    return 0;
}