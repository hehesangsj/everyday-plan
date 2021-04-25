class Solution {
public:
    int climbStairs(int n) {
        vector<int> v (n);
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        else
            v[0] = 1;
            v[1] = 2;
            for (int i = 2; i < n; i++){
                v[i] = v[i-1] + v[i-2];
            }
        return v[n-1];

    }
};
