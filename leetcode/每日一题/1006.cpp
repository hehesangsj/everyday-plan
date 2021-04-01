class Solution {
public:
    int clumsy(int N) {
        stack<int> all;
        all.push(N--);
        int idx = 0;
        while (N > 0){
            if (idx % 4 == 0)
                all.top() *= N;
            else if (idx % 4 == 1)
                all.top() /= N;
            else if (idx % 4 ==2)
                all.push(N);
            else
                all.push(-N);
            
            N--;
            idx++;
        }

        int result = 0;
        while(!all.empty()){
            result = result + all.top();
            all.pop();
        }
        return result;
    }
};
