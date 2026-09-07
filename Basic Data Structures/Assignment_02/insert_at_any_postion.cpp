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

void insert_node_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
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

void insert_node_at_any_position(Node* &head, int idx, int val)
{
    Node *newNode = new Node(val);
    
    if(idx == 0) {
        newNode->next = head;
        head = newNode;
    } else {

        Node* temp = head;
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
            if(temp == NULL) break;
        }

        if(temp == NULL) {
            cout << "Invalid" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    print_linked_list(head);
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_node_at_tail(head, tail, val);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int idx, val;
        cin >> idx >> val;
        insert_node_at_any_position(head, idx, val);
    }

    return 0;
}