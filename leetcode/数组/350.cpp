class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> itst;
        vector<int>:: iterator point1 = nums1.begin();
        vector<int>:: iterator point2 = nums2.begin();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while (point1 != nums1.end() && point2 != nums2.end()){
            if (*point1 < *point2)
                point1++;
            else if (*point1 > *point2)
                point2++;
            else{
                itst.push_back(*point1);
                point1++;
                point2++;
                
            }
        }
        return itst;
    }
};
