class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long tot=0;
        int ans=0;
        int l=0;
        for(int r=0;r<nums.size();r++){
            tot+=nums[r];
            while((long long)nums[r]*(r-l+1)>tot+k){
                tot-=nums[l];
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};