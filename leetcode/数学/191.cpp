class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = n & 1;
        int i = 1;
        int times = 31;
        while(times-- > 0){
            if (n & (i = i << 1))
                result++;
        }
        return result;        
    }
};
