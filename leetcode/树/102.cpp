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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode> q;
        vector<vector<int>> result;
        if (root == nullptr){
            return result;
        }
        do {
            vector<int> temp;
            if (q.empty())
                q.push(*root);
            int size = q.size();
            while (size > 0){
                temp.push_back(q.front().val);
                if (q.front().left != nullptr)
                    q.push(*q.front().left);
                if (q.front().right != nullptr)
                    q.push(*q.front().right);
                q.pop();
                size--;
            }
            result.push_back(temp);
        }while(!q.empty());
        return result;
    }
};
