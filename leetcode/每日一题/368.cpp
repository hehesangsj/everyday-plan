class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int> dp (nums.size(),1);
        sort(nums.begin(),nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (i == 0)
                dp[i] = 1;
            for (int j = 0; j < i; j++){
                if (nums[i] % nums[j] == 0)
                    if (dp[j] + 1 > dp[i])
                        dp[i] = dp[j] + 1;                
            }
        }
        int idx = 0;
        int maxNum = 0;
        vector<int> result;
        for (int i = 0; i < dp.size(); i++){
            if (dp[i] > maxNum){
                idx = i;
                maxNum = dp[i];
            }
        }
        result.insert(result.begin(),nums[idx]);
        maxNum--;
        while (maxNum > 0){
            for (int i = 0; i < idx; i++){
                if (dp[i] == maxNum && nums[idx] % nums[i] == 0){
                    result.insert(result.begin(),nums[i]);
                    maxNum--;
                    idx = i;
                }
            }
        }
        return result;
    }
};
