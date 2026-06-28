class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]== '.' )continue;

                for(int k=j+1;k<9;k++)
                {
                    if(board[i][j] == board[i][k] )
                    {
                        return false;
                    }
                }
                for(int k=i+1;k<9;k++)
                {
                    if(board[i][j] == board[k][j] )
                    {
                        return false;
                    }
                }

                int boxrow= (i/3)*3;
                int boxcol= (j/3)*3;

                 for(int r =boxrow;r<boxrow+3;r++){
                for(int c =boxcol;c<boxcol+3;c++){
                if(i == r && j==c)continue;
                if(board[i][j] ==board[r][c])return false;
                }
                 }

                
            }
        }




        return true;
    }
};