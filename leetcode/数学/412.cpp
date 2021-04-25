class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result (n);
        for (int i = 0; i < n; i++){
            if ((i + 1) % 3 == 0){
                result[i] += "Fizz";
            }
            if ((i + 1) % 5 == 0){
                result[i] += "Buzz";
            }
            if (result[i] == ""){
                result[i] = to_string(i + 1);
            }
        }
        return result;
    }
};
