class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        int ind=0;
        for(int num:nums) mpp[num]++;
        for(int i=mini;i<=maxi;i++){
            while(mpp[i]>0){
                nums[ind]=i;
                ind++;
                mpp[i]--;
            }
        }
        return nums;
    }
};