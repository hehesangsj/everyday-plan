class Solution {
public:
    int countPrimes(int n) {
        vector<int> prime;
        vector<int> isPrime (n,1);
        int result = 0;
        for (int i = 2; i < n; i++){
            if (isPrime[i] == 1){
                prime.push_back(i);
                result++;
            }
            for (int j = 0; j < prime.size() && (long(prime[j]) * i) < n; j++){
                isPrime[prime[j] * i] = 0;
                if (i % prime[j] == 0){
                    break;
                }
            }
        }
        return result;
    }
};
