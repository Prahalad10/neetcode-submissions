class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int ans;
        for(int num:nums){
            mpp[num]++;
            if(mpp[num]>1){
                ans=num;
                break;
            }
        }
        return ans;
    }
};
