class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int zero = 0;
        for (int i = 0; i < size; i++){
            if(i + zero == size-1){
                break;
            }
            if (nums[i] == 0){
                reverse(nums, i, size-1);
                reverse(nums, i, size-2);
                zero++;
                i--;
            }
        }
    }
    void reverse(vector<int>& nums, int begin, int end){
        int temp;
        while(begin < end){
            temp = nums[begin];
            nums[begin] = nums[end];
            nums[end] = temp;
            begin++;
            end--;
        }
    }
};
