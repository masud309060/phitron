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

// 10
// 20  30
// 60 -1  -1 50
// 70 80   -1 -1 
// -1 -1 -1 -1

void preorder(Node* root) {
    if(root == NULL) return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(Node* root) {
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

void level_order(Node* root) {
    if(root == NULL) {
        cout << "Tree is empty!";
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    
}


int main() {
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(60);
    Node* d = new Node(50);
    Node* e = new Node(70);
    Node* f = new Node(80);

    root->left = a;
    root->right = b;

    a->left = c;
    b->right = d;

    c->left = e;
    c->right = f;
    
    level_order(root);

    return 0;
}