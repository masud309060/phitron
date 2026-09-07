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

void level_order_print(Node* root, int level) {
    queue<Node*> q;

    if(root != NULL) q.push(root);

    int currentLevel = 0;
    bool invalid = true;
    while (!q.empty())
    {
        int q_size = q.size();

        if(currentLevel == level) {
            for (int i = 0; i < q_size; i++)
            {
                Node* f = q.front();
                q.pop();

                cout << f->val << " ";
            }
            invalid = false;
            break;
        } 

        for (int i = 0; i < q_size; i++)
        {
            Node* f = q.front();
            q.pop();

            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        
        currentLevel++;
    }

    if(invalid == true) {
        cout << "Invalid";
    }
}

int main() {
    Node* root = inputTree();
    int level;
    cin >> level;

    level_order_print(root, level);

    return 0;
}