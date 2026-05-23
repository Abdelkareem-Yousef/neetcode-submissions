class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        
        function<void(int, int,int)> backtrack = [&](int i, int sum,int lst){
            if (sum == target) {
                result.push_back(cur);
                return;
            }
            if (sum > target || i == candidates.size()) {
                return;
            }

            if( candidates[i] != lst){
            cur.push_back(candidates[i]);
            backtrack(i+1,sum +candidates[i],-1);
            cur.pop_back();
            }
            backtrack(i + 1, sum, candidates[i]);

        };
        
        backtrack(0, 0,-1);
        return result;
        
    }
};

