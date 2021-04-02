class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>   m;
        for (int i = 0; i < s.length(); i++){
            if (m.find(s[i]) == m.end()){
                m.insert({s[i], i});
            }
            else{
                m.find(s[i])->second = -1;
            }
        }
        int min = s.length();
        for (unordered_map<char,int>::iterator it = m.begin(); it != m.end(); it++){
            if (it->second < min && it->second != -1){
                min = it->second;
            }
            
        }
        if (min == s.length()){
            return -1;
        }
        return min;
    }
};

