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

vector<int> getLeafNodes(Node* root) {
    
    vector<int> arr;

    if(root == NULL) return arr;

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. Ber kore ana
        Node* f = q.front();
        q.pop();

        // 2. Oi node niye kaj kora
        if(f->left == NULL && f->right == NULL) {
            arr.push_back(f->val);
        }

        // 3. Children push kora 
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return arr;
}

int main() {
    Node* root = input_tree();

    vector<int> arr = getLeafNodes(root);
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    for(int x: arr) {
        cout << x << " ";
    }


    return 0;
}