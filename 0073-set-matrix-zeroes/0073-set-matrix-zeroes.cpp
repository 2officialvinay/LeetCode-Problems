class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        bool rowFlag = false;
        bool colFlag = false;

        // Check first row...
        for(int j = 0; j < c; j++){
            if(matrix[0][j] == 0) {
                rowFlag = true;
                break;
            }
        }

        // Check first column...
        for(int i = 0; i < r; i++){
            if(matrix[i][0] == 0) {
                colFlag = true;
                break;
            }
        }

        // Marking rows and columns...
        for(int i = 1; i < r; i++){
            for(int j = 1; j < c; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            } 
        }

        // Filling inner matrix
        for (int i = 1; i < r; i++) {
            for (int j = 1; j < c; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

         // First row
        if (rowFlag) {
            for (int j = 0; j < c; j++)
                matrix[0][j] = 0;
        }

        // First column
        if (colFlag) {
            for (int i = 0; i < r; i++)
                matrix[i][0] = 0;
        } 
    }
};