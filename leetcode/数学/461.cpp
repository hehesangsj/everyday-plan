class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x ^ y;
        int result = 0;
        while (temp){
            temp &= temp - 1;
            result++;
        }
        return result;
    }
};
