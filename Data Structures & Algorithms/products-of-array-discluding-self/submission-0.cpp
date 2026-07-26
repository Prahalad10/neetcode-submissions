class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int prod=1;
        int zero=0;
        for(int num:nums){
            if(num!=0) prod*=num;
            if(num==0) zero++;
        }
        if(zero>1){
            for(int i=0;i<n;i++) ans.push_back(0);
            return ans;
        }
        if(zero==0){
            for(int i=0;i<n;i++){
                int num=prod/nums[i];
                ans.push_back(num);
            }
            return ans;
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0) ans.push_back(0);
            else ans.push_back(prod);
        }
        return ans;
    }
};
