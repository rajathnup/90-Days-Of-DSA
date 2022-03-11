/* Link to the question:
https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1 */



class Solution{
public:

    bool isSafe(vector<vector<int>> board, int x, int y, int n){
        for(int i = 0; i<x; i++){
            if(board[i][y] == 1){
                return false;
            }
        }
        
        int row = x, col = y;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 1){
                return false;
            }
            row--;
            col--;
        }
        
        row = x, col = y;
        while(row >= 0 && col < n){
            if(board[row][col] == 1){
                return false;
            }
            row--;
            col++;
        }
        
        return true;
    }

    void solve(int x, int n, vector<vector<int>> &board, vector<vector<int>> &result){
        if(x == n){
            vector<int> vt;
            for(int i = 0; i<n; i++){
                for(int j = 0; j<n; j++){
                    if(board[i][j] == 1){
                        vt.push_back(j+1);
                    }
                }
            }
            result.push_back(vt);
            return;
        }
        
        for(int col = 0; col < n; col++){
            if(isSafe(board, x, col, n)){
                board[x][col] = 1;
                solve(x+1, n, board, result);
                board[x][col] = 0;
            }
        }
    }

    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> result;
        vector<vector<int>> board(n, vector<int>(n, 0));
        
        solve(0, n, board, result);
        sort(result.begin(), result.end());
        return result;
    }
};
