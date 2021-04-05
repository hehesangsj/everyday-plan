class Solution {
public:
    string countAndSay(int n) {
        if (n == 1){
            return "1";
        }
        else{
            string result;
            string temp = countAndSay(n-1);
            int left = 0;
            int right = 0;
            while (right < temp.size()){
                if (temp[right] != temp[left]){
                    result += (to_string(right - left) + temp[left]);
                    left = right;
                }
                else if(right == temp.size() - 1){
                    result += (to_string(right - left + 1) + temp[left]);
                    break;
                }
                else{
                    right++;
                }
            }
            return result;
        }

    }
};
