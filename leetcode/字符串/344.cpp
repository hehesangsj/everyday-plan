class Solution {
public:
    void reverseString(vector<char>& s) {
        int begin = 0;
        int end = s.size() - 1;
        int temp;
        while (begin < end){
            temp = s[begin];
            s[begin++] = s[end];
            s[end--] = temp;
        }

    }
};
