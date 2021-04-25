class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int temp;
        while (i < nums.size()){
            if(nums[i] != val){
                i++;
            }
            else{
                nums[i] = nums[nums.size()-1];
                nums.pop_back();
            }

        }
        return nums.size();


    }
};
