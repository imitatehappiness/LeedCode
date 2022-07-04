#include <iostream>

using namespace std;


// Runtime: 15 ms
// Memory Usage: 21.7 MB
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool validate(TreeNode* root, long minValue, long maxValue) {
    if(!root) {
        return true;
    }
    if(root->val >= maxValue || root->val <= minValue){
       return false; 
    } 
    return validate(root->left, minValue, root->val) && validate(root->right, root->val, maxValue);
}

bool isValidBST(TreeNode* root) {
    return validate(root, LONG_MIN, LONG_MAX); 
}




