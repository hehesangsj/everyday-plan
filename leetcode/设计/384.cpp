class Solution {
private:
    vector<int> cur;
    vector<int> original;
    
public:
    
    Solution(vector<int>& nums) {
        cur.assign(nums.begin(),nums.end());
        original.assign(nums.begin(),nums.end());
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        cur.assign(original.begin(),original.end());
        return cur;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        for (int i = 0; i < cur.size(); i++){
            int idx = rand() % (cur.size() - i) + i;
            int temp = cur[i];
            cur[i] = cur[idx];
            cur[idx] = temp;
        }
        return cur;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
