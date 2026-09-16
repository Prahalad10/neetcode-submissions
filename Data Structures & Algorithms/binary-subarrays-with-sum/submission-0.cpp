class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return func(nums,goal)-func(nums,goal-1);
    }
    int func(vector<int>& nums,int goal){
        int l=0;
        int r=0;
        int c=0;
        int sum=0;
        if(goal<0) return 0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>goal){
                sum-=nums[l];
                l++;
            }
            c+=(r-l+1);
            r++;
        }
        return c;
    }
};