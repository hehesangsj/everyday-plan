class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        int b = 0;
        int tempA, tempB;
        for (int i = 0; i < nums.size(); i++){
            tempA = ~a & b & nums[i] | a & ~b & ~nums[i];
            tempB = ~a & ~b & nums[i] | ~a & b & ~nums[i];
            a = tempA;
            b = tempB;         
        }
        return b;
    }
};
