class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0)
            return 0;
        vector<int> next (needle.size());
        next = getNext(needle);
        int i = 0;
        int j = 0;
        while (i < haystack.size() && j < int(needle.size())){
            if (j == -1 || haystack[i] == needle[j]){
                i++;
                j++;
            }
            else
                j = next[j];
            if (j >= int(needle.size()))
                return i - needle.size();
        }
        return -1;
        


    }
    vector<int> getNext (string hay){
        vector<int> next(hay.size());
        int j,k;
        j = 0;
        k = -1;
        next[0] = -1;
        while (j < hay.size() - 1){
            if (k == -1 || hay[j] == hay[k]){
                j++;
                k++;
                next[j] = k;
            }
            else{
                k = next[k];
            }
        }
        return next;
    }
};
