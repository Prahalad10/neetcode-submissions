class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        int sum=0;
        unordered_map<int,int> mpp;
        mpp[0]=1;
        for(int num:nums){
            sum+=num;
            int diff=sum-k;
            ans+=mpp[diff];
            mpp[sum]++;
        }
        return ans;
    }
};