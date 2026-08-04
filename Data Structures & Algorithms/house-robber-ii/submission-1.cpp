class Solution {
public:
    int func(vector<int>& nums,int i,vector<int>& dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(func(nums,i+1,dp),nums[i]+func(nums,i+2,dp));
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> temp1;
        vector<int> temp2;
        int n=nums.size();
        vector<int> dp1(n-1,-1);
        vector<int> dp2(n-1,-1);
        for(int i=0;i<n-1;i++) temp1.push_back(nums[i]);
        for(int i=1;i<n;i++) temp2.push_back(nums[i]);
        return max(func(temp1,0,dp1),func(temp2,0,dp2));
    }
};
