class Solution {
private:
    bool checkRow(char num, vector<vector<char>>& board, int row){
        int count = 0;
        for (size_t i = 0; i < board[row].size(); i++){
            if (board[row][i] == num){
                count++;
            }
        }
        return count > 1;
    }

    bool checkCol(char num, vector<vector<char>>& board, int col){
        int count = 0;
        for(size_t i = 0; i < board.size(); i++){
            if (board[i][col] == num){
                count++;
            }
        }
        return count > 1;
    }

    bool checkSq(char num, vector<vector<char>>& board, int col, int row){
        int startRow = (row / 3) * 3;
        int startCol = (col / 3) * 3;
        int count = 0;

        for (size_t i = 0; i < 3; i++){
            for (size_t j = startCol; j < startCol + 3; j++){
                if (board[startRow][j] == num){
                    count++;
                }
            }
            startRow++;
        }
        return count > 1;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check the column
            // function to see if there is any duplicate going down
        // check the row
            // function to see if there is anu duplicate going across
        // check the square
            // thinking a function to iterate through it and make sure there is only of 1 of that number
            // if there is two then it is wrong

        for (size_t i = 0; i < board.size(); i++){
            for (size_t j = 0; j < board[i].size(); j++){
                if (board[i][j] != '.'){
                bool col = checkCol(board[i][j], board, j);
                bool row = checkRow(board[i][j], board, i);
                bool sq = checkSq(board[i][j], board, j, i);

                if (col || row || sq){
                    return false;
                }
                }

                
            }
        }
        return true;
    }
};
