class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<int> s;
        set<int>::iterator it;
        for (int i = 0; i < nums.size(); i++){
            it = s.lower_bound(max(-long(INT_MAX)-1,long(nums[i]) - t));
            if (it != s.end())
                if (long(*it) <= long(nums[i]) + t)
                    return true;
            s.insert(nums[i]);
            if (s.size() > k)
                s.erase(nums[i-k]);
        }
        return false;

    }
};
