class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int num = 0;
        sort(costs.begin(),costs.end());
        int i = 0;
        while (coins > 0 && i < costs.size()){
            coins -= (costs[i++]);
            if (coins >= 0)
                num++;
        }
        return num;

    }
};
