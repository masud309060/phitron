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

int size_of_linkedin_list(Node* head) {
    int size = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    
    return size;
}

int main()
{
    
    Node *h1 = NULL;
    Node *t1 = NULL;

    Node *h2 = NULL;
    Node *t2 = NULL;
    
    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;

        insert_node_at_tail(h1, t1, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
        break;
        
        insert_node_at_tail(h2, t2, val);
    }

    int size1 = size_of_linkedin_list(h1);
    int size2 = size_of_linkedin_list(h2);


    if(size1 == size2) {
        int flag = 1;

        Node* temp1 = h1;
        Node* temp2 = h2;

        while (temp1 != NULL)
        {
            if(temp1->val != temp2->val) {
                flag = 0;
                break;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(flag == 1) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        
    } else {
        cout << "NO";
    }
    

    return 0;
}