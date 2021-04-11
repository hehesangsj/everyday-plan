class Solution {
public:
    int nthUglyNumber(int n) {
        int size = n;
        vector<int> table (n);
        table[0] = 1;
        int p2 = 0;
        int p3 = 0;
        int p5 = 0;
        int cur = 1;
        while (n > 1){
            table[cur] = min(table[p2]*2,min(table[p3]*3,table[p5]*5));
            
            if (table[cur] == table[p2]*2)
                p2++;
            if (table[cur] == table[p3]*3)
                p3++;
            if (table[cur] == table[p5]*5)
                p5++;
            cur++;
            n--;
        }
        return table[size-1];
    }
};
