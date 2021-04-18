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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        if (size == 0){
            return nullptr;
        }
        if (size == 1){
            TreeNode *result = new TreeNode(nums[0]);
            return result;
        }
        vector<int> leftVector(nums.begin(),nums.begin()+size/2); 
        TreeNode* left = sortedArrayToBST(leftVector);
        vector<int> rightVector(nums.begin()+size/2+1,nums.end()); 
        TreeNode* right = sortedArrayToBST(rightVector);
        TreeNode* mid = new TreeNode(nums[size/2]);
        mid->left = left;
        mid->right = right;
        return mid;
    }
    
};
