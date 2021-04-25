class Solution {
public:
    int numDecodings(string s) {
        int size = s.size();
        vector<int> result (size + 1,0);
        result[0] = 1;
        if (s[0] != '0')
            result[1] = 1;
        int i = 2;
        while (i <= s.size()){
            if (s[i-1] != '0')
                result[i] += result[i-1];
            if ((s[i-2] - '0') * 10 + (s[i-1] - '0') <= 26 && s[i-2] != '0'){
                result[i] += result[i-2];
            }
            i++;
        }
        return result[size];
    }
};
