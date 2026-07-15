class Solution {
public:
    vector<vector<string>> ans;

    bool isSafe(vector<string> &board, int r, int c, int n){

        // Checking upper side...
        int row = r-1, col = c;
        while(row >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
        }

        // Checking left diagonal...
        row = r-1, col = c-1;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }

        // Checking right diagonal...
        row = r-1, col = c+1;
        while(row >= 0 && col < n){
            if(board[row][col] == 'Q'){
                return false;
            }
            row--;
            col++;
        }

        return true;
    }

    void N_Queen_Helper(vector<string> &board, int n, int row){
        // Base case...
        if(row == n){
            ans.push_back(board);
            return;
        }

        for(int col = 0; col < n; col++){
            if(isSafe(board, row, col, n)){
                // Place Queen...
                board[row][col] = 'Q';

                // Recurse...
                N_Queen_Helper(board, n, row+1);

                // Remove Queen (Backtrack)...
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));

        N_Queen_Helper(board, n, 0);

        return ans;
    }
};