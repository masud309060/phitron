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

int main()
{
    Node *h1 = NULL;
    Node *t1 = NULL;
    int val;
    
    int c1 = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_node_at_tail(h1, t1, val);
        c1++;
    }

    print_linked_list(h1);
    cout << c1 << endl;

    Node *h2 = NULL;
    Node *t2 = NULL;

    int c2 = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_node_at_tail(h2, t2, val);
        c2++;
    }

    print_linked_list(h2);
    cout << c2 << endl;

    if(c1 == c2) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}