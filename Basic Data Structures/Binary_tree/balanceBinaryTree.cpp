#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputTree() {
    int val;
    cin >> val;
    Node* root = NULL;
    if(val != -1) root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())  
    {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* left_node = NULL;
        Node* right_node = NULL;

        if(l != -1) left_node = new Node(l);
        if(r != -1) right_node = new Node(r);

        if(left_node) p->left = left_node;
        if(right_node) p->right = right_node;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return root;
}

void print_level_order(Node * root) {
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())  
    {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        cout << p->val << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
}

void print_level_order2(Node* root) {
    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())  
    {

        int size = q.size();
        int level_wise_nodes = 0;
        for (int i = 0; i < size; i++)
        {
            Node* p = q.front();
            q.pop();

            cout << p->val << " ";
            level_wise_nodes++;

            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }

        cout << endl;
    }    
}

int dfsHeight(Node* root) {
    if(root == NULL) return 0;

    int l = dfsHeight(root->left);
    if(l == -1) return -1;

    int r = dfsHeight(root->right);
    if(r == -1) return -1;

    if(abs(l - r) > 1) return -1;

    return max(l, r) + 1;
}


int main() {
    Node* root = inputTree();
    print_level_order(root);
    cout << endl;

    int h = dfsHeight(root);

    if(h == -1) cout << "NO";
    else cout << "YES";


    return 0;
}