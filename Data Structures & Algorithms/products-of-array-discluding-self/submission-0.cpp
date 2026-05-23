class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector <int> sufix(n);
        vector <int> prefix(n);
        
        prefix[0]=1;
        prefix[1]=nums[0];
        for(int i=2; i<n;i++){
            prefix[i]=nums[i-1]*prefix[i-1];
        }


    sufix[n-1]=1;
    sufix[n-2]=nums[n-1];

    for(int i=n-3;i>=0;i--){
        sufix[i]=sufix[i+1] * nums[i+1];


    }

    vector <int> ans;
    for(int i=0;i<n;i++){
        ans.push_back(prefix[i]*sufix[i]);

    }

    return ans;


        
    }
};