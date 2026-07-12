class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
                int rows =matrix.size();
                        int col = matrix[0].size();
                                int top =0;
                                        int bot =rows-1;
                                                int row;
                                                        while(top<=bot){
                                                                row=(top+bot)/2;
                                                                        if (target>matrix[row][col-1]){
                                                                                    top = row+1;
                                                                                            }else if (target<matrix[row][0]){
                                                                                                        bot = row - 1;
                                                                                                                }else {break;}

                                                                                                                        }
                                                                                                                                if(!(top<=bot))return false;
                                                                                                                                        int l =0;
                                                                                                                                                int r =col-1;
                                                                                                                                                        int mid =0;
                                                                                                                                                                row=(top+bot)/2;
                                                                                                                                                                        while (l<=r){
                                                                                                                                                                                    mid = (r+l)/2;
                                                                                                                                                                                                if (target>matrix[row][mid]){
                                                                                                                                                                                                            l = l+1;
                                                                                                                                                                                                                    }else if (target<matrix[row][mid]){
                                                                                                                                                                                                                                r = r - 1;
                                                                                                                                                                                                                                        }else return true;
                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                        return false;
                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                            };
