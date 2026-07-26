class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false};
        bool col[9][9]={false};
        bool box[9][9]={false};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int c=board[i][j]-'1';
                int b=(i/3)*3+(j/3);
                if(row[i][c] || col[j][c] || box[b][c]) return false;
                row[i][c]=true;
                col[j][c]=true;
                box[b][c]=true;
            }
        }
        return true;
    }
};
