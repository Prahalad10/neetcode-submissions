class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int ind=n-1;
        vector<int> ans(n);
        int l=0;
        int r=n-1;
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                ans[ind]=nums[l]*nums[l];
                l++;
                ind--;
            }else{
                ans[ind]=nums[r]*nums[r];
                r--;
                ind--;
            }
        }
        return ans;
    }
};