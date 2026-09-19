class Solution {
public:
    void dfs(int node,unordered_map<int,vector<int>>& mpp, vector<bool>& vis){
        if(vis[node]==true) return;
        vis[node]=true;
        for(auto it:mpp[node]){
            dfs(it,mpp,vis);
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> mpp;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            mpp[u].push_back(v);
            mpp[v].push_back(u);
        }
        vector<bool> vis(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans++;
                dfs(i,mpp,vis);
            }
        }
        return ans;
    }
};
