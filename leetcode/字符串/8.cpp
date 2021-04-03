class Solution {
public:
    int myAtoi(string s) {
        int begin = 0;
        int read = 1;
        int state = begin;
        int sign = 1;
        int result = 0;
        for (int i = 0; i < s.size(); i++){
            if (state == begin){
                if (s[i] == ' ')
                    continue;
                else if (s[i] == '-'){
                    sign = -1;
                    state = read;
                    continue;
                }
                else if (s[i] == '+'){
                    sign = 1;
                    state = read;
                    continue;
                }
                else if(s[i] <= '9' && s[i] >= '0'){
                    result = result * 10 + s[i] - '0';
                    state = read;
                    continue;
                }
                else{
                    return 0;
                }
            }
            else if (state == read){
                if (s[i] <= '9' && s[i] >= '0'){
                    if (result > INT_MAX / 10 || ((result == INT_MAX / 10) && ((s[i] - '0')> (INT_MAX % 10)))){
                        return sign == 1 ? INT_MAX : - INT_MAX - 1;
                    }
                    result = result * 10 + (s[i] - '0');
                }
                else 
                    return result * sign;
            }
        }
        return result * sign;

    }
};
