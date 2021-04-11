class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        int mid = (left + right) / 2;
        while (left < right){
            if (nums[left] > nums[mid]){
                right = mid;
                mid = (left + right) / 2;
            }
            else if (nums[right] < nums[mid]){
                left = mid + 1;
                mid = (left + right) / 2;
            }
            else{
                return nums[left];
            }
        }
        return nums[left];
    }
};
