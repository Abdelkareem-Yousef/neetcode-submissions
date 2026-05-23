class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end()); //o( n log(n))
        int n = nums.size();
        int count = 0;
        int max = 0;
        if(nums.empty())
        {
            return count;
        }else
        {
            count++;
        }
        for(int i=0; i<n-1;i++ )
        {
            if(nums[i+1]-nums[i] == 1)
            {
                count++;
            }else if(nums[i+1]-nums[i] > 1)
            {
                if(count>max)
                {
                    max = count;
                }
                count =1;
            }else
            {
                continue;
            }
        }
        if(count>max)
        {
            max = count;
        }
        return max;
    }
};