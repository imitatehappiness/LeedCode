#include <iostream>

using namespace std;

// Runtime: 44 ms
// Memory Usage: 23.3 MB
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(p->val < root->val && q->val < root->val){
        return lowestCommonAncestor(root->left, p, q);
    }else if(p->val > root->val && q->val > root->val){
        return lowestCommonAncestor(root->right,p,q);
    }else{
        return root;
    }
}



