class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int l=0;
        int r=0;
        int sum=0;
        while(r<nums.size()){
            sum+=nums[r];
            if(sum>=target){
                while(sum>=target){
                    ans=min(ans,(r-l+1));
                    sum-=nums[l];
                    l++;
                }
            }
            r++;
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};