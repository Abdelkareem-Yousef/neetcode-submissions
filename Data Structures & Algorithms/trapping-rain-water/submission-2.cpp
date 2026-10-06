class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int r=n-1 ;
        int l=0;
        int ans =0;
        int mxl=height[l];
        int mxr=height[r];
        while(l<r){
            if(mxl<mxr){
                l++;
                mxl=max(mxl,height[l]);
                ans+=mxl-height[l];
            }
            else{ r--;
                mxr=max(mxr,height[r]);
                ans+=mxr-height[r];
            }
        }


        return ans;
        
    }
};
