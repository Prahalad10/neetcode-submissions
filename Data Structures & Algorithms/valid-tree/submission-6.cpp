class Solution {
public:
    void dfs(int i,int parent,unordered_map<int,vector<int>>& mpp,bool& valid,vector<bool>& vis){
        vis[i]=true;
        for(auto it:mpp[i]){
            if(it==parent) continue;
            if(vis[it]){
                valid=false;
                return;
            }
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
        bool valid=true;
        dfs(0,-1,mpp,valid,vis);
        for(auto it:vis){
            if(it==false) return false;
        }
        return valid;
    }
};
