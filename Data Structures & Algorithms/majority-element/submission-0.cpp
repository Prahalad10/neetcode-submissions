class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ans;
        unordered_map<int,int> mpp;
        for(int num:nums){
            mpp[num]++;
            if(mpp[num]>n/2){
                ans=num;
                break;
            }
        }
        return ans;
    }
};