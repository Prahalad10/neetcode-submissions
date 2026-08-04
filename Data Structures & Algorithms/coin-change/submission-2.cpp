class Solution {
public:
    int dfs(vector<int>& coins,int amt,vector<int>& dp){
        if(amt==0) return 0;
        if(dp[amt]!=-1) return dp[amt];
        int ans=1e9;
        for(int coin:coins){
            if(amt-coin>=0){
                ans=min(ans,1+dfs(coins,amt-coin,dp));
            }
        }
        return dp[amt]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int mini=dfs(coins,amount,dp);
        if(mini>=1e9) return -1;
        return mini;
    }
};
