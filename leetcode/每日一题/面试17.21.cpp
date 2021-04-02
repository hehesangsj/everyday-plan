class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int rightNow, leftNow;
        int rightMax = 0;
        int leftMax = 0;
        int result = 0;
        while (left < right){
            rightNow = height[right];
            leftNow = height[left];
            if (rightNow > rightMax){
                rightMax = rightNow;
            }
            if (leftNow > leftMax){
                leftMax = leftNow;
            }
            if (leftMax < rightMax){
                left++;
                result += leftMax - leftNow;
            }
            else{
                right--;
                result += rightMax - rightNow;
            }
        }
        return result;

    }
};
