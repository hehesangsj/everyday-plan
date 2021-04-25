class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> result(nums.size());
        result[0] = nums[0];
        for (int i = 1; i < nums.size(); i++){
            result[i] = max(result[i-1],0) + nums[i];
        }
        sort(result.begin(),result.end());
        return result[nums.size()-1];

    }
};
