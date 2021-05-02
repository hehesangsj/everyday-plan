class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int,int> m;
        for (int i = 0; i < wall.size(); i++){
            int temp = 0;
            for (int j = 0; j < wall[i].size() - 1; j++){
                temp += wall[i][j];
                if (m.find(temp) == m.end()){
                    m.insert({temp,1});
                }
                else{
                    m.find(temp)->second++;
                }
            }
        }
        int max = 0;
        for (auto it = m.begin(); it != m.end(); it++){
            if (max < it->second){
                max = it->second;
            }
        }
        return wall.size() - max;
    }
};
