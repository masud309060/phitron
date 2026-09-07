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

int main()
{
    int q;
    cin >> q;

    while (q--)
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

        int x;
        cin >> x;

        int i = 0;
        int findIndex = -1;
        Node* temp = head;
        
        while (temp != NULL)        
        {
            if(temp->val == x) {
                findIndex = i;
                break;
            }
            
            temp = temp->next;
            i++;
        }

        cout << findIndex << endl;
    }

    return 0;
}