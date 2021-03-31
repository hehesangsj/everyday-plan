class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int kReal = k % size;
        reverse(nums, 0, size-1);
        reverse(nums, 0, kReal-1);
        reverse(nums, kReal, size-1);
    }
    void reverse(vector<int>& array, int begin, int end){
        int temp;
        while (begin < end){
            temp = array[begin];
            array[begin] = array [end];
            array[end] = temp;
            begin++;
            end--;
        }

    }
};
