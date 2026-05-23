class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int , int > mp ; 
        for(int num : nums ){
            mp[num]++;
        }
        int n=nums.size();
        vector <vector<int>> ans(n+1);
        for ( auto it : mp){
            ans[it.second].push_back(it.first);
        }
        vector <int> solve;
        for (int i =n ; i>=0 && solve.size()<k; i--){

            for (int num : ans[i]){
                solve.push_back(num);
                if(solve.size()==k)break;
                }

        }

        return solve;

        
    }
};
