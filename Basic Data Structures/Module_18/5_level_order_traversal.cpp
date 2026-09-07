#include <bits/stdc++.h>
using namespace std;

class BinaryTreeNode {
    public:
    int val;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> getLevelOrder(BinaryTreeNode *root)
{
    vector<int> arr;
    if(root == NULL) return arr;
    queue<BinaryTreeNode*> q;
    q.push(root);

    while (!q.empty())
    {
        // ber kora 
        BinaryTreeNode* p = q.front();
        q.pop();

        // kaj kora 
        arr.push_back(p->val);

        // children push kora 
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }

    return arr;
}

int main() {
    

    return 0;
}