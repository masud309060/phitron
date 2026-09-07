#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        string val;
        Node* next;
        Node* prev;

    Node(string s) {
        this->val = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

class BrowserHistory {
    public:
        Node* head = NULL;
        Node* tail = NULL;
        Node* pointer = NULL;
    
    void push(string s) {
        Node* newNode = new Node(s);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
            pointer = head;
            return;
        }

        tail->next = newNode;
        tail->next->prev = tail;
        tail = newNode;
    }

    void search(string s) {

        Node* temp = head;
        while (temp != NULL)
        {
            if(temp->val == s) {
                pointer = temp;
                break;
            }

            temp = temp->next;
        }

        if(temp == NULL) {
            cout << "Not Available" << endl;
        } else {
            cout << pointer->val << endl;
        }
        
    }

    void prev(string s) {
        if(pointer->prev != NULL) {
            pointer = pointer->prev;
            cout << pointer->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }

    void next(string s) {
        if(pointer->next != NULL) {
            pointer = pointer->next;
            cout << pointer->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
};

int main() {
    
    BrowserHistory history;
    string s;
    while (true)
    {
        cin >> s;
        if(s == "end") {
            break;
        }

        history.push(s);
    }


    int q;
    cin >> q;

    while (q--)
    {
        string str;
        cin >> str;

        if(str == "visit") {
            cin >> str;
            history.search(str);
        } else if(str == "prev") {
            history.prev(str);
        } else if(str == "next") {
            history.next(str);
        }    
    }

    return 0;
}