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
    int minDiffInBST(TreeNode* root) {
        stack<TreeNode> s;
        int min = INT_MAX;
        int temp = -1;
        while (!s.empty() || root != nullptr){
            while (root != nullptr){
                s.push(*root);
                root = root -> left;
            }
            root = &s.top();
            s.pop();
            if (temp != -1)
                min = min < abs(root->val-temp) ? min : abs(root->val-temp);
            temp = root->val;
            root = root->right;
        } 
        return min;

    }
};
