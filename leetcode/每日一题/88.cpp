class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int point1 = m - 1;
        int point2 = n - 1;
        int pos = m + n - 1;
        while(pos >= 0){
            if (point1 < 0){
                nums1[pos--] = nums2[point2--];
                continue;
            }
            if (point2 < 0){
                nums1[pos--] = nums1[point1--];
                continue;
            }
            if(nums1[point1] > nums2[point2]){
                nums1[pos--] = nums1[point1--];
            }
            else{
                nums1[pos--] = nums2[point2--];
            }
        }

    }
};
