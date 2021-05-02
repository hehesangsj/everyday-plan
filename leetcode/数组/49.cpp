class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> m;
        for (string str : strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            if (m.find(temp) != m.end()){
                m.find(temp)->second.push_back(str);
            }
            else{
                vector<string> tempStr; 
                tempStr.push_back(str);
                m.insert({temp,tempStr});
            }
        }
        for (auto it = m.begin(); it != m.end(); it++){
            result.push_back(it->second);
        }
        return result;
    }
};
