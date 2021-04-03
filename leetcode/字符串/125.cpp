class Solution {
public:
    bool isPalindrome(string s) {
        int begin = 0;
        int end = s.size() - 1;
        while (begin < end){
            if ((s[begin] < 'a' || s[begin] > 'z') && (s[begin] < '0' || s[begin] > '9')){
                if (s[begin] >= 'A' && s[begin] <= 'Z'){
                    s[begin] = s[begin] - 'A' + 'a';
                }
                else{
                    begin++;
                    continue;
                }
            }
            if ((s[end] < 'a' || s[end] > 'z') && (s[end] < '0' || s[end] > '9')){
                if (s[end] >= 'A' && s[end] <= 'Z'){
                    s[end] = s[end] - 'A' + 'a';
                }
                else{
                    end--;
                    continue;
                }
            }
            if (s[begin] == s[end]){
                begin++;
                end--;
                continue;
            }
            else
                return false;
        }
        return true;
    }
};
