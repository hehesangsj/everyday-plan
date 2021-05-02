class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 == 1)
            return false;
        stack<char> ss;
        unordered_map<char,char> m = {
            {'}','{'},
            {']','['},
            {')','('}
        };
        for (char ch : s){
            if (ch == '[' || ch == '{' || ch == '(')
                ss.push(ch);
            else if (ss.empty() || m[ch] != ss.top())
                return false;                
            else
                ss.pop();
        }
        return ss.empty();

    }
};
