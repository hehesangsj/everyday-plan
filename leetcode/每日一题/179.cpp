class Solution {
public:
    static bool compare (int x, int y){
        long sx = 1;
        long sy = 1;
        while (sx <= x || x == 0){
            sx *= 10;
            if (x == 0){
                break;
            }
        }
        while (sy <= y || y == 0){
            sy *= 10;
            if (y == 0){
                break;
            }

        }
            
        return sy * x + y > sx * y + x;
    }

    string largestNumber(vector<int> &nums) {
        sort(nums.begin(), nums.end(), compare);
        if (nums[0] == 0)
            return "0";
        string result;
        for (int i = 0; i < nums.size(); i++){
            result += to_string(nums[i]);
        }
        return result;
    }
    
};
