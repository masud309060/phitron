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

Node* input_tree() {
    int val;
    cin >> val;
    
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ana 
        Node* p = q.front();
        q.pop();

        // 2. oi node niye kaj
        int left, right;
        cin >> left >> right;

        Node *left_node, *right_node;
        if(left == -1) left_node = NULL;
        else left_node = new Node(left); 
        if(right == -1) right_node = NULL;
        else right_node = new Node(right);

        p->left = left_node;
        p->right = right_node;

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

int SUM = 0;


void sumNodesExceptLeaf(Node* root) {
    if(root == NULL) return;

    if(root->left == NULL && root->right == NULL) {
        return;
    } else {
        SUM += root->val;
    }

    sumNodesExceptLeaf(root->left);
    sumNodesExceptLeaf(root->right);
}



int main() {
    Node* root = input_tree();

    sumNodesExceptLeaf(root);
    cout << SUM;

    return 0;
}