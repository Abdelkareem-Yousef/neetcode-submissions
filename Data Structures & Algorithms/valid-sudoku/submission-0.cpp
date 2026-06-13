class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){

                if(board[i][j]=='.')continue;

            for(int r=i+1;r<9;r++){
            if(board[i][j]==board[r][j])return false;
                         }
            for(int c=j+1;c<9;c++){
            if(board[i][j] == board[i][c])return false;
                        }
            
            int boxrow=(i/3)*3;
            int boxcol=(j/3)*3;

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
