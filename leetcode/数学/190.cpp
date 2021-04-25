class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int times = 0;
        uint32_t result = 0;
        while (times < 32){
            if (n & (1 << times))
                result += 1 << (31 - times);
            times++;
        }
        return result;
        
    }
};
