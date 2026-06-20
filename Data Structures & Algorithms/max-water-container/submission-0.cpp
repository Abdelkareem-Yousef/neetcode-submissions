class Solution {
public:
    int maxArea(vector<int>& heights) { 
        int h = 0 ; 
        int r=0;
        int l=heights.size()-1;
        while(r<l){
            int area =min(heights[r],heights[l])*(l-r);
            h = max(area,h);
            if (heights[r]<heights[l]){
                r++;
            }else{
                l--;
            }

        }
        return h;
        
    }
};
