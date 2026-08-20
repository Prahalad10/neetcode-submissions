class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<i+nums.size();j++){
                sum+=nums[j%nums.size()];
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};