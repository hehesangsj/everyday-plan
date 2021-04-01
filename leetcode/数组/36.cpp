class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> column (9, vector<int>(9, 0));
        vector<vector<int>> row (9, vector<int>(9, 0));
        vector<vector<int>> square (9, vector<int>(9, 0));
        int idxSquare, value;
        for (int i = 0; i < board.size(); i++){
            for (int j = 0; j < board[i].size(); j++){
                idxSquare = 3 * (i / 3) + (j / 3);
                if (board[i][j] != '.'){
                    value = board[i][j] - '0';
                    if (column[value-1][i] != 1 && row[value-1][j] != 1 && square[value-1][idxSquare] != 1){
                        column[value-1][i] = 1;
                        row[value-1][j] = 1;
                        square[value-1][idxSquare] = 1;

                    }
                    else
                        return false;
                }
            }
        }
        return true;
    }
};
