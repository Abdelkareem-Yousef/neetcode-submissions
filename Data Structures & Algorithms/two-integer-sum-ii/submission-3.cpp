class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        for (int i =0;i<n;i++){
            int second = target-numbers[i];
            int low =i+1;
            int high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(numbers[mid]==second){
                    return{i+1,mid+1};
                }else if(numbers[mid]>second){
                    high = mid -1;
                }else {
                    low = mid +1;
                }
            }

        }

        return {};
        
    }
};
