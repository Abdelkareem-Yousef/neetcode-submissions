class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> cur;
        vector<bool> used(nums.size(), false);

        function<void()> backtrack = [&]() {
            if (cur.size() == nums.size()) {
                result.push_back(cur);
                return;
            }

            for (int i = 0; i < nums.size(); i++) {
                if (used[i]) continue;

                used[i] = true;
                cur.push_back(nums[i]);

                backtrack();  // recurse deeper

                cur.pop_back();
                used[i] = false;
            }
        };

        backtrack();
        return result;
    }
};
