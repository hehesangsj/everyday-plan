class Solution {
public:
    int strStr(string haystack, string needle) {
        int sizeN = needle.size();
        int sizeH = haystack.size();
        vector<double> hash;
        if (sizeN == 0){
            return 0;
        }
        double temp = 0;
        for (int i = 0; i <= sizeH - sizeN; i++){
            if (!hash.empty()){
                temp = (hash[i-1] - (haystack[i-1] - 'a') * pow(26,sizeN-1)) * 26 + (haystack[i+sizeN-1] - 'a');
                hash.push_back(temp);
                //cout << temp <<endl;
            }
            else{
                
                for (int j = 0; j < sizeN; j++){
                    temp += pow(26,sizeN-1-j) * (haystack[j] - 'a');
 
                }
                //cout << temp <<endl;
                hash.push_back(temp);
            }
        }
        double valueNeedle = 0;
        for (int i = 0; i < sizeN; i++){
            valueNeedle += pow(26,sizeN-1-i) * (needle[i] - 'a');

        }
        //cout << valueNeedle <<endl;
        for (int i = 0; i < hash.size(); i++){
            if (valueNeedle == hash[i]){
                return i;
            }
        }
        return -1;

    }
};
