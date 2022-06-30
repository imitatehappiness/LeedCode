#include <iostream>
#include <vector>

using namespace std;


// Runtime: 35 ms
// Memory Usage: 11.2 MB
class Solution {
 public:
  vector<int> preorder(Node *root) {
    vector<int> result;
    Helper(root, result);
    return result;
  }

 private:
  void Helper(Node *root, vector<int> &result) {
    if (!root) return;
    result.push_back(root->val);
    for (auto child : root->children) Helper(child, result);
  }
};