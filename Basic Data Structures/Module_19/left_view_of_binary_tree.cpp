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
    if(val != -1) root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *left_node = NULL;
        Node *right_node = NULL;

        if(l != -1) left_node = new Node(l);
        if(r != -1) right_node = new Node(r);

        if(left_node) p->left = left_node;
        if(right_node) p->right = right_node;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return root;
};

vector<int> nodeLevel(Node* root) {
    vector<bool> freq(999, false);
    vector<int> arr;

    queue<pair<Node*, int>> q;
    if(root) q.push({root, 1});

    while (!q.empty())
    {
        pair<Node*, int> p = q.front();
        q.pop();

        Node* node  = p.first;
        int level = p.second;

        if(freq[level] == false) {
            arr.push_back(node->val);
            freq[level] = true;
        }

        if(node->left) {
            q.push({node->left, level + 1});
        }
        if(node->right) {
            q.push({node->right, level + 1});
        }
    }


    return arr;
};

int main() {
    Node* root = inputTree();

    vector<int> arr = nodeLevel(root);

    return 0;
}