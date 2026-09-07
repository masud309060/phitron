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
    Node* root;
    root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ana
        Node* p = q.front();
        q.pop();

        // 2. kaj kora 
        int l, r;
        cin >> l >> r;

        Node *l_node, *r_node;
        if(l == -1) l_node = NULL;
        else l_node = new Node(l);
        if(r == -1) r_node = NULL;
        else r_node = new Node(r);

        if(l_node) p->left = l_node;
        if(r_node) p->right = r_node;

        // 3. children push kora
        if(p->left) {
            q.push(p->left);
        }
        if(p->right) {
            q.push(p->right);
        }
    }
    
    return root;
}

int countLeafNode(Node* root) {
    if(root == NULL) {
        return 0;
    }

    if(root->left == NULL && root->right == NULL) {
        return 1;
    }

    int l = countLeafNode(root->left);
    int r = countLeafNode(root->right);
    
    return l + r;
}


int main() {
    Node* root = inputTree();
    int count = countLeafNode(root);

    cout << count;
    
    return 0;
}