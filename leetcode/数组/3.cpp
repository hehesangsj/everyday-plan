class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        int left = 0;
        int right = 0;
        int temp = 0;
        unordered_set<char> set;
        while (left < s.size() && right < s.size()){
            if (set.find(s[right]) == set.end()){
                set.insert(s[right]);
                temp++;
                right++;
                if (temp > result)
                    result = temp;
            }
            else{
                set.erase(set.find(s[left]));
                left++;
                temp--;
            }
        }
        return result;
    }
};
