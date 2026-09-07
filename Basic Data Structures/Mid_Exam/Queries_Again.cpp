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
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    
    cout << endl;
}

void print_backward(Node* tail) {
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        Node* newNode = new Node(v);
        
        if(x == 0) {
            // insert at head
            if(head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                head->prev = newNode;
                newNode->next = head;
                head = newNode;
            }
        } else {
            // insert at any x position
            Node* temp = head;
            for (int i = 1; i < x; i++)
            {
                if(temp == NULL) {
                    break;
                }

                temp = temp->next;
            }

            if(temp == NULL) {
                cout << "Invalid" << endl;
                continue;
            }

            if(temp->next == NULL) {
                // insert at tail
                temp->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            } else {
                temp->next->prev = newNode;
                newNode->next = temp->next;

                temp->next = newNode;
                newNode->prev = temp;
            }
        }

        print_forward(head);
        print_backward(tail);
        
    }
    

    return 0;
}