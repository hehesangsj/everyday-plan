class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if (nums[0] != 0)
            return 0;
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        while(left < right){
            mid = (left + right) / 2;
            if (nums[mid] != mid)
                right = mid;
            else 
                left = mid + 1;
        }
        return nums[right] == right ? right + 1 : nums[right] - 1;

    }
};
