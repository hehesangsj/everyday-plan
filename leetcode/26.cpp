class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0){
            return 0;
        }
        int i = 1;
        int result = 1;
        for (int j = 1; j < nums.size(); j++){
            if (nums[j] == nums [j - 1]) continue;
            else{
                nums[i] = nums[j];
                i++;
                result++;
            }
        }
        return result;

    }
};
