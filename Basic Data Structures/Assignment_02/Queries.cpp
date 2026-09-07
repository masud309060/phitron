#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_node_at_head(Node *&head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;

    if(tail == NULL) {
        tail = newNode;
    }
}

void insert_node_at_tail(Node *&head, Node *&tail, int val)
{
    Node* newNode = new Node(val);
    
    if(head == NULL) {
        head = newNode;
        tail = newNode;

        return;
    }

    tail->next = newNode;
    tail = tail->next;  
}

void delete_node_from_linked_list(Node *&head, Node *&tail, int idx)
{
    Node* temp = head;

    if(idx == 0) {
        if(head == NULL) return;
        head = head->next;
        return;
    }

    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
        if(temp == NULL) break;
    }

    if(temp == NULL) return;
    if(temp->next == NULL) return;

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;

    if(temp->next == NULL) {
        tail = temp;
    }

}

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}


int main()
{
    Node* head = NULL;
    Node* tail = head;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if(x == 0) {
            insert_node_at_head(head, tail, v);
        }
        
        if(x == 1) {
            insert_node_at_tail(head, tail, v);
        } 

        if(x == 2) {
            delete_node_from_linked_list(head, tail, v);
        }

        print_linked_list(head);
    }


    return 0;
}