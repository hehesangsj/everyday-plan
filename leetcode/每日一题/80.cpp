class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (3 > nums.size()){
            return nums.size();
        }
        int slow = 2;
        int fast = 2;
        while (fast < nums.size()){
            if (nums[fast] == nums[slow-2]){
                fast++;
            }
            else{
                nums[slow++] = nums[fast++];
            }
        }
        return slow;
        
    }
};
