class Solution {
public:
        vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> cur;

        function<void(int)> backtrack = [&](int i){
            if (i == nums.size()) {
                result.push_back(cur);
                return;
            }

            cur.push_back(nums[i]);
            backtrack(i+1);
            cur.pop_back();
            backtrack(i + 1);

        };
        
        backtrack(0);
        return result;
        
    }
};