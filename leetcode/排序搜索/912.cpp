class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp = nums;
        quickSort(temp, 0, temp.size() - 1);
        return temp;        
    }
    void quickSort(vector<int>& nums, int l, int r){
        if (l >= r)
            return;
        int val = nums[(l + r) / 2];
        int i = l - 1;
        int j = r + 1;
        while (i < j){
            do i++; while(nums[i] < val);
            do j--; while(nums[j] > val);
            if (i < j) swap(nums[i],nums[j]);
        }
        quickSort(nums, l, j);
        quickSort(nums, j+1, r);
    }
};
