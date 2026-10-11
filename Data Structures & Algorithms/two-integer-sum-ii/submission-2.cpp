class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int n = a.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            int need = target - a[i];
            if(mp.find(need) != mp.end()){
                return {mp[need]+1, i+1};
            }
            mp[a[i]] = i;
        }
        return {};
        
    }
};