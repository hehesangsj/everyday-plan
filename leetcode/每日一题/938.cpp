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
    int rangeSumBST(TreeNode* root, int low, int high) {
        stack<TreeNode*> s;
        int sum = 0;
        s.push(root);
        while (!s.empty()){
            TreeNode* temp = s.top();
            s.pop();
            if (temp != nullptr){
                if (temp-> val <= high && temp -> val >= low){
                    sum += temp->val;
                    s.push(temp->left);
                    s.push(temp->right);
                }
                else if (temp -> val > high)
                    s.push(temp->left);
                else
                    s.push(temp->right);                
            }
        }
        return sum;
    }
};
