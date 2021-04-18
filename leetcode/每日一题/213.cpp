class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        vector<int> result (size,0);
        result[0] = nums[0];
        if (size == 1){
            return result[0];
        }
        result[1] = nums[0] > nums[1] ? nums[0] : nums[1];
        if (size == 2){
            return result[1];
        }
        for (int i = 2; i < size - 1; i++){
            if (nums[i] + result[i-2] > result[i-1]){
                result[i] = nums[i] + result[i-2];
            }
            else{
                result[i] = result[i-1];
            }
        }
        int max1 = result[size - 2];
        result[1] = nums[1];
        result[2] = nums[1] > nums[2] ? nums[1] : nums[2];
        for (int i = 3; i < size; i++){
            if (nums[i] + result[i-2] > result[i-1]){
                result[i] = nums[i] + result[i-2];
            }
            else{
                result[i] = result[i-1];
            }
        }
        return max1 > result[size - 1] ? max1 : result[size - 1];
    }
};
