class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int sum = 0;
        int max = 0;
        for (int num : weights){
            sum += num;
            if (num > max)
                max = num;
        }
        int left = max;
        int right = sum;
        int mid;
        while (left < right){
            int mid = (left + right) / 2;
            int times = 1;
            int temp = 0;
            for (int i = 0; i < weights.size(); i++){
                if (temp + weights[i] > mid){
                    temp = weights[i];
                    times++;
                }
                else{
                    temp += weights[i];
                }
            }
            if (times > D)
                left = mid + 1;
            else
                right = mid;
        }
        return right;
    }
};
