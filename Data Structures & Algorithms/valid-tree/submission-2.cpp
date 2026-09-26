class Solution {
public:
    void dfs(int i,int parent,unordered_map<int,vector<int>>& mpp,bool& valid,vector<bool>& vis){
        if(vis[i]==true){
            valid=false;
            return;
        }
        vis[i]=true;
        for(auto it:mpp[i]){
            if(it==parent) continue;
            dfs(it,i,mpp,valid,vis);
        }
    }
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1) return false;
        unordered_map<int,vector<int>> mpp;
        for(auto it:edges){
            mpp[it[0]].push_back(it[1]);
            mpp[it[1]].push_back(it[0]);
        }
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(vis[i]==true) continue;
            bool valid=true;
            dfs(i,-1,mpp,valid,vis);
            if(valid==false) return false;
        }
        for(auto it:vis){
            if(it==false) return false;
        }
        return true;
    }
};
