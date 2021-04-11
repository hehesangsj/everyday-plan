class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        while (left <= right){
            int mid = (left + right) / 2;
            if (target == nums[mid] || target == nums[left] || target == nums[right]){
                return true;
            }
            else{
                if (nums[left] < nums[mid]){
                    if (target < nums[mid] && target > nums[left]){
                        right = mid - 1;
                    }
                    else{
                        left = mid + 1;
                    }
                }
                else if (nums[mid] < nums[right]){
                    if (target > nums[mid] && target < nums[right]){
                        left = mid + 1;
                    }
                    else{
                        right = mid - 1;
                    }
                }
                else{
                    left++;
                    right--;
                }
            }
        }
        return false;


    }
};
