class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int temp = INT_MAX;
        int result = 0;
        while (i < prices.size()){
            if (prices[i] < temp){
                temp = prices[i];
            }
            if (prices[i] >= temp && prices[i] - temp > result){
                result = prices[i] - temp;
            }
            i++;
        }
        return result;

    }
};
