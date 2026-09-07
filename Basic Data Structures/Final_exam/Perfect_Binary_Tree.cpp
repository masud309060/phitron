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

int getMaxDepth(Node* root) {
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;

    int l = getMaxDepth(root->left);
    int r = getMaxDepth(root->right);

    return max(l, r) + 1;
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


bool perfectBinaryTree(Node* root) {
    if(root == NULL) return true;

    int maxDepth = getMaxDepth(root) - 1;
    int totalLeafNode = countLeafNode(root);

    // cout << "MaxDepth " << maxDepth << endl;
    // cout << "totalLeafNode " << totalLeafNode << endl;

    if(pow(2, maxDepth) == totalLeafNode) return true;

    return false;
}


int main() {
    Node* root = inputTree();

    bool ans = perfectBinaryTree(root);
    
    if(ans == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}