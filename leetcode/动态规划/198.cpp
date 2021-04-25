class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> result (nums.size());
        result[0] = nums[0];
        for (int i = 1;i < nums.size();i++){
            if (i > 1){
                result[i] = max(result[i-2] + nums[i],result[i-1]);
            }
            else{
                result[i] = max(nums[i],nums[i-1]);
            }
        }
        return result[nums.size()-1];
    }
};
