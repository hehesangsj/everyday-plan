class Solution {
public:
    bool canCross(vector<int>& stones) {
        vector<vector<int>> dp (stones.size(), vector<int> (stones.size() + 2,0));
        dp[0][0] = 1;
        if (stones[1] != 1)
            return false;
        dp[1][stones[1] - stones[0]] = 1;
        for (int i = 2; i < stones.size(); i++){
            for (int j = i - 1; j > 0; j--)
            if (stones[i] - stones[j] <= j + 1&&
                (dp[j][stones[i] - stones[j]] ||
                dp[j][stones[i] - stones[j] + 1]||
                dp[j][stones[i] - stones[j] - 1])){
                dp[i][stones[i] - stones[j]] = 1;
            }
        }
        for (int k = 0; k < stones.size(); k++)
            if (dp[stones.size() - 1][k])
                    return true;
        return false;
    }
};
