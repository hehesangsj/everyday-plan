/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* result = new TreeNode();
        TreeNode* temp = result;
        while (!s.empty() || root != nullptr){
            while (root != nullptr){
                s.push(root);
                root = root->left;
            }
            temp->right = new TreeNode(s.top()->val);
            temp = temp->right;
            root = s.top()->right;
            s.pop();
        }
        return result->right;
    }
};
