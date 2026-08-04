class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({0,{i,j}});
                    vis[i][j]=2;
                }
            }
        }
        int time=0;
        int dirx[4]={0,0,1,-1};
        int diry[4]={1,-1,0,0};
        while(!q.empty()){
            int t=q.front().first;
            int x=q.front().second.first;
            int y=q.front().second.second;
            q.pop();
            time=max(t,time);
            for(int k=0;k<4;k++){
                int nx=x+dirx[k];
                int ny=y+diry[k];
                if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1 && vis[nx][ny]==0){
                    q.push({t+1,{nx,ny}});
                    vis[nx][ny]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]==1) return -1;
            }
        }
        return time;
    }
};
