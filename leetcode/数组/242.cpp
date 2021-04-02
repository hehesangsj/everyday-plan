class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> m;
        for (int i = 0; i < s.size(); i++){
            if(m.find(s[i]) == m.end()){
                m.insert({s[i],1});
            }
            else{
                m.find(s[i])->second++;
            }
        }
        for (int i = 0; i < t.size(); i++){
            if(m.find(t[i]) == m.end()){
                return false;
            }
            else if (m.find(t[i])->second == 0){
                return false;
            }
            else{
                m.find(t[i])->second--;
            }
        }
        for (unordered_map<int,int>::iterator it = m.begin(); it != m.end(); it++){
            if(it->second > 0){
                return false;
            }
        }
        return true;
    }
};
