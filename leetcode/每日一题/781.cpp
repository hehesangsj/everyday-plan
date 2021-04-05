class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> m;
        int result = 0 ;
        for (int i = 0; i < answers.size(); i++){
            if (m.find(answers[i]) == m.end()){
                m.insert({answers[i],1});
            }
            else{
                m.find(answers[i])->second++;
            }
        }
        for (unordered_map<int,int>::iterator it = m.begin(); it != m.end(); it++){
            result += ceil(double(it->second) / double(it->first + 1)) * (it->first + 1);
        }
        return result;
    }
};
