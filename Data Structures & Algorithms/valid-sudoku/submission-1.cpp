class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // Check each row
        for (int row = 0; row < 9; row++) {
            set<char> row_set;
            for (int col = 0; col < 9; col++) {
                char val = board[row][col];
                if (val != '.') {
                    if (row_set.count(val)) return false;
                    row_set.insert(val);
                }
            }
        }

        // Check each column
        for (int col = 0; col < 9; col++) {
            set<char> col_set;
            for (int row = 0; row < 9; row++) {
                char val = board[row][col];
                if (val != '.') {
                    if (col_set.count(val)) return false;
                    col_set.insert(val);
                }
            }
        }

        // Check each 3x3 box
        for (int box_row = 0; box_row < 3; box_row++) {
            for (int box_col = 0; box_col < 3; box_col++) {
                set<char> box_set;
                for (int row = 0; row < 3; row++) {
                    for (int col = 0; col < 3; col++) {
                        char val = board[box_row * 3 + row][box_col * 3 + col];
                        if (val != '.') {
                            if (box_set.count(val)) return false;
                            box_set.insert(val);
                        }
                    }
                }
            }
        }

        return true;
    }
};