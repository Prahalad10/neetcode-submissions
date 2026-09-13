class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n);
        vector<int> outdegree(n);
        for(auto it:trust){
            indegree[it[1]-1]++;
            outdegree[it[0]-1]++;
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
            if(indegree[i-1]==n-1 && outdegree[i-1]==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};