class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int prev=nums[0][1];
        for(int i=1;i<nums.size();i++){
            int start=nums[i][0];
            int end=nums[i][1];
            if(start>=prev) prev=end;
            else{
                ans++;
                prev=min(end,prev);
            }
        }
        return ans;
    }
};
