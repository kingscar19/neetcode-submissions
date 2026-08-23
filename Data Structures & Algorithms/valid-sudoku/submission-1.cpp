class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> cols[9];
        unordered_set<int> rows[9];
        unordered_set<int> squares[9];

        for(int r = 0; r < 9; r++) {
            for(int c = 0; c < 9; c++) {
                if(board[r][c] == '.') {
                    continue;
                }

                int idx = (r / 3) * 3 + (c / 3);

                // if(rows[r].find(board[r][c]) != rows[r].end() ||
                //    cols[c].find(board[r][c]) != cols[c].end() ||
                //    squares[idx].find(board[r][c]) != squares[idx].end()) {
                //     return false;
                // }    Another way to write this is as follows by using the count function 

                if(rows[r].count(board[r][c]) ||
                   cols[c].count(board[r][c]) ||
                   squares[idx].count(board[r][c])) {
                    return false;
                }

                cols[c].insert(board[r][c]);
                rows[r].insert(board[r][c]);
                squares[idx].insert(board[r][c]);
            }
        }
        return true;
    }
};
