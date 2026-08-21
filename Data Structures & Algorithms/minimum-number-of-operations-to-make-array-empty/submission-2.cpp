class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int ans=0;
        for(int num:nums) mpp[num]++;
        for(auto it:mpp){
            int c=it.second;
            if(c==1) return -1;
            if(c%3==0) ans+=c/3;
            else if(c%3==1) ans+=(c/3)-1+2;
            else ans+=(c/3)+1;
        }
        return ans;
    }
};