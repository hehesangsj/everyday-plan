class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result = digits;
        vector<int>::iterator it = (result.end() - 1);
        (*it)++;
        while (it > result.begin()){
            if(*it == 10){
                *it = 0;
                (*(--it))++;
            }
            else
                break;
        }
        if (result[0] == 10){
            result[0] = 0;
            result.insert(result.begin(), 1);
        }
        return result;
    }
};
