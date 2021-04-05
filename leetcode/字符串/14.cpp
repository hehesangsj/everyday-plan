class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int point = 0;
        int size = strs.size();
        if (size == 0){
            return "";
        }
        string result;
        while(true){
            if (point > (int(strs[0].size()) - 1)){
                    return result;
            }
            char temp = strs[0][point];
            for(int i = 1; i < size; i++){
                if (point > (int(strs[i].size()) - 1)){
                    return result;
                }
                if (strs[i][point] != temp){
                    return result;
                }
            }
            result.push_back(strs[0][point++]);
        }
        return result;
    }
};

