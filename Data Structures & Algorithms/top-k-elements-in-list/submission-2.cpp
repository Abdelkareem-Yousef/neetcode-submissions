class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int , int > mp ; 
        for(int nu : nums )mp[nu]++;
        vector <vector<int>> ans(nums.size()+1);
        for ( auto it : mp){
            ans[it.second].push_back(it.first);
        }
        vector <int> solve;
        for (int i =nums.size() ; i>0 ; i--){
            for (int num : ans[i]){
                solve.push_back(num);
                if(solve.size()==k)return solve;
                }
        }
        return solve;
    }
};
