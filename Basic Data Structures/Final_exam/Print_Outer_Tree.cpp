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

    if(val == -1) return NULL;
    Node* root = new Node(val);

    queue<Node*> q;
    q.push(root);

    while (!q.empty())  
    {
        // ber kore ana
        Node* p = q.front();
        q.pop();

        // cout << p->val << " ";

        // kaj kora
        int l, r;
        cin >> l >> r;
        Node *leftNode, *rightNode;
        if(l != -1) leftNode = new Node(l);
        else leftNode = NULL;
        if(r != -1) rightNode = new Node(r);
        else rightNode = NULL;

        p->left = leftNode;
        p->right = rightNode;

        // children push kora
        if(leftNode) q.push(leftNode);
        if(rightNode) q.push(rightNode);
    }
    

    return root;
}



void printLeftNodes(Node* root) {
    if(root == 0) return;

    if(root->left != NULL) {
        printLeftNodes(root->left);
    } else {
        printLeftNodes(root->right);
    }

    cout << root->val << " ";
}

void printRightNodes(Node* root) {
    if(root == 0) return;
    cout << root->val << " ";

    if(root->right != NULL) {
        printRightNodes(root->right);
    } else {
        printRightNodes(root->left);
    }
}

int main() {
    Node* root = inputTree();

    printLeftNodes(root->left);
    cout << root->val << " ";
    printRightNodes(root->right);


    return 0;
}