class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<long,long> times;
        unordered_set<string> record;
        vector<int> result (k,0);
        for (int i = 0; i < logs.size(); i++){
            string temp = to_string(logs[i][0]) + ',' + to_string(logs[i][1]);
            if (record.find(temp) == record.end()){
                    record.insert(temp);
                if (times.find(logs[i][0]) == times.end()){
                    times.insert({logs[i][0],1});
                }
                else{
                    times.find(logs[i][0])->second++;
                }
            }
        }
        for (unordered_map<long,long>::iterator it = times.begin(); it != times.end(); it++){
            result[(it->second)-1]++;
        }
        return result;

    }
};
