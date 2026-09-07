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
    int x;
    cin >> x;

    Node* root = NULL;
    if(x != -1) root = new Node(x);

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

        p->left = left_node;
        p->right = right_node;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return root;
};

void level_order(Node* root) {
    if(root == NULL) return;

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

int count_leaf(Node* root) {
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL) {
        return 1;
    }

    int l = count_leaf(root->left);
    int r = count_leaf(root->right);

    return l + r;
}

int max_height(Node* root) {
    if(root == NULL) return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}


int main() {
    Node* root = input_tree();

    level_order(root);

    cout << endl;
    cout << count_leaf(root) << endl;
    cout << max_height(root) << endl;
    return 0;
}

