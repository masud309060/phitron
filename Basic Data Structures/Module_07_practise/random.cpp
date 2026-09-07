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

void insert_input_at_tail(Node* &head, Node* &tail, int val) {

    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void insert_input_at_specific_position(Node* &head, int val) {

    Node* newNode = new Node(val);

}

int size_of_linked_list(Node* head) {
    int count = 0;
    
    Node* temp = head;
    while (temp != NULL) 
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void print_linked_list(Node* head) {
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_linked_list_in_reverse(Node* head) {
    if(head == NULL) return;

    print_linked_list_in_reverse(head->next);
    cout << head->val << " ";
}

int max_value_from_linked_list(Node* head) {
    int mx = INT_MIN;

    Node* temp = head;
    while (temp != NULL)
    {
        mx = max(mx, temp->val);
        temp = temp->next;
    }

    return mx;    
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int x;

    while (cin >> x)
    {
        if(x == -1) break;
        insert_input_at_tail(head, tail, x);
    }

    print_linked_list(head);

    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

    }



    return 0;
}











// int main() {
//     Node* head = NULL;
//     Node* tail = NULL;

//     Node* head2 = NULL;
//     Node* tail2 = NULL;

//     int x;

//     while (cin >> x)
//     {
//         if(x == -1) break;
//         take_input_at_tail(head, tail, x);
//     }

//     while (cin >> x)
//     {
//         if(x == -1) break;
//         take_input_at_tail(head2, tail2, x);
//     }

//     int size1 = size_of_linked_list(head);
//     int size2 = size_of_linked_list(head2);
    
//     if(size1 == size2) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }

//     return 0;
// }