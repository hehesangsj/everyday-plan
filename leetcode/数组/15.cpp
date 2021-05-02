class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        vector<vector<int>> result;
        if (nums.size() <3)
            return result;
        for (int first = 0; first < nums.size(); first++){
            if (first > 0 && nums[first] == nums[first-1])
                continue;
            int third = nums.size() - 1;
            for (int second = first + 1; second < nums.size(); second++){
                if (second > first + 1 && nums[second] == nums[second-1])
                    continue;
                if (second >= third)
                    break;
                while (nums[second] + nums[third] + nums[first] > 0){
                    if (second >= third - 1)
                        break;
                    third--;
                }
                if (nums[second] + nums[third] + nums[first] == 0)
                    result.push_back({nums[first], nums[second], nums[third]});
            }
        }
        return result;

    }
};
