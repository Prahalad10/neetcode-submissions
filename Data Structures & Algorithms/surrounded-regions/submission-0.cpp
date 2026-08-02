class Solution {
public:
    void func(vector<vector<char>>& board,int r,int c, int n, int m){
        if(r<0 || c<0 || r>=n || c>=m || board[r][c]!='O') return;
        board[r][c]='T';
        func(board,r+1,c,n,m);
        func(board,r,c+1,n,m);
        func(board,r-1,c,n,m);
        func(board,r,c-1,n,m);
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            if(board[i][0]=='O') func(board,i,0,n,m);
            if(board[i][m-1]=='O') func(board,i,m-1,n,m);
        }
        for(int j=0;j<m;j++){
            if(board[0][j]=='O') func(board,0,j,n,m);
            if(board[n-1][j]=='O') func(board,n-1,j,n,m);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O') board[i][j]='X';
                else if(board[i][j]=='T') board[i][j]='O';
            }
        }
    }
};
