public:
    string truncateSentence(string s, int k) {
        string result;
        int i = 0;
        while(k > 0 && i < s.size()){
            if (s[i] != ' '){
                result.push_back(s[i]);
                i++;
            }
            else{
                k--;
                result.push_back(s[i]);
                i++;
            }
        }
        if (result[result.size()-1]==' '){
            result.erase(result.size()-1);
        }
        return result;
        
    }
};
