#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Runtime: 0 ms
// Memory Usage: 12.7 MB
vector<vector<int>> levelOrder(TreeNode* root) {

    vector<vector<int>> result;
    if(root == nullptr){
        return result;
    }
    queue<TreeNode*> tree;
    tree.push(root);

    while(!tree.empty()){
        vector<int> row;
        int treeLenght = tree.size();
        for(int i = 0; i < treeLenght; i++){
            TreeNode* node = tree.front();
            tree.pop();
            row.push_back(node->val);

            if(node->left){
                tree.push(node->left);
            }
            if(node->right){
                tree.push(node->right);
            }
        }
        result.push_back(row);

    }
    return result;
}
