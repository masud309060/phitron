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


bool isMirror(Node *node1, Node *node2) {
    if(node1 == NULL && node2 == NULL) return true;
    if(node1 == NULL || node2 == NULL) return false;

    return node1->val == node2->val && isMirror(node1->left, node2->right) && isMirror(node1->right, node2->left);
}

bool isSymmetric(Node* root) {
    if(root == NULL) return true;

    return isMirror(root->left, root->right);
}

int main() {
    

    return 0;
}