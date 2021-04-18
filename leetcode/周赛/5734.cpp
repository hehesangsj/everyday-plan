class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> s;
        for (char ch : sentence){
            if (s.find(ch) == s.end() && ch <= 'z' && ch >= 'a')
                s.insert(ch);
        }
        return s.size() == 26;

    }
};
