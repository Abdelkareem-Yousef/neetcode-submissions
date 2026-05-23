class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int , int > mp ; 
        for(int num : nums ){
            mp[num]++;
        }
        vector <pair<int , int>> ans;
        for ( auto it : mp){

            ans.push_back({it.second,it.first});

        }
        sort(ans.rbegin(),ans.rend());
        vector <int> solve;
        for (int i =0 ; i<k; i++){

            solve.push_back(ans[i].second);

        }

        return solve;

        
    }
};
