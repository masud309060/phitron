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
// size of the linked list
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


int main() {
    Node* head = NULL;
    Node* tail = head;
    
    int val;
    while (cin >> val) insert_at_tail(head, tail, val);
    
    int size = size_of_linked_list(head);
    int middle = size / 2;

    int isEven = size % 2 == 0 ? 1 : 0;
    if(isEven != 1) middle++; 

    Node* temp = head;
    for (int i = 1; i <= middle; i++)
    {
        if(i == middle) {
            if(isEven == 1) {
                cout << temp->val << " " << temp->next->val;
            } else {
                cout << temp->val;
            }
            
        }
        temp = temp->next;
    }

    return 0;
}