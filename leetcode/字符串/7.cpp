class Solution {
public:
    int reverse(int x) {
        int sign = x > 0 ? 1 : -1;
        x = abs(x);
        int result = 0;
        int end = 0;
        while (x > 0){
            end = pop(x);
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && end > INT_MAX % 10))
                return 0;
            else{
                result = result * 10 + end;
            }
        
        }
        return result * sign ;

    }
    int pop(int &x){
        int temp = x % 10;
        x = x / 10;
        return temp;
    }
};

