class Solution {
public:
    int dfs(vector<int>& nums,int i,vector<int>& dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(dfs(nums,i+1,dp),nums[i]+dfs(nums,i+2,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return dfs(nums,0,dp);
    }
};
