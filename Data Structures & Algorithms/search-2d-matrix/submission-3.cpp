class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

            int lCol = 0;
            int rCol = matrix.size() - 1;
            int possibleCol = -1;
            // find the possible column
            while (lCol <= rCol){
                int i = lCol + (rCol - lCol) / 2;

                if (matrix[i][0] == target){
                    return true;
                } else if (matrix[i][0] > target){
                    rCol = i - 1;
                } else {
                    possibleCol = i;
                    lCol = i + 1;
                } 
            }

            if (possibleCol == -1){
                return false;
            }

            int l = 0;
            int r = matrix[possibleCol].size() - 1;

            // find the target in the row
            while (l <= r){
                int i = l + (r - l) / 2;

                if (matrix[possibleCol][i] == target){
                    return true;
                } else if (matrix[possibleCol][i] < target){
                    l = i + 1;
                } else {
                    r = i - 1;
                }
            }

            return false;
    }
};
