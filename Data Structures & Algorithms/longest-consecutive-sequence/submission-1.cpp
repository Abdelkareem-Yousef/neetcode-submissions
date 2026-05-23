class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> set;
        for(int num : nums){
            set.insert(num);
        }
        int len=0;
        for(int n : nums){
            if(!(set.count(n-1)) ){
                int counter =1;
                while(set.count(n + counter)){
                    counter++;
                }
                len = max(counter,len);
            }
        }
        return len;
    }
};
