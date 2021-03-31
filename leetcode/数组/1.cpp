class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> s;
        vector<int> result;
        int size = nums.size();
        for (int i = 0; i < size; i++){
            int xPair = target - nums[i];
            if (s.find(xPair) == s.end()){
                s.insert({{nums[i], i}});
            }
            else{
                result.push_back(s.find(xPair)->second);
                result.push_back(i);
            }
        }
        return result;
    }
};
