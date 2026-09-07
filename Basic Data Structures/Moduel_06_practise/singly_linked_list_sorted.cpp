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

int main() {
    int val;

    Node* head = NULL;
    Node* tail = head;

    while (cin >> val)
    {
        insert_at_tail(head, tail, val);
    }
    
    int flag = 1;

    Node* temp = head;
    while (temp->next != NULL)
    {
        if(temp->val > temp->next->val) {
            flag = 0;
            break;
        }
        temp = temp->next;
    }

    if(flag == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }    

    return 0;
}