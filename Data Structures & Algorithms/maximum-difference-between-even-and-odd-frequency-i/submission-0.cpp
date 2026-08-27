class Solution {
public:
    int maxDifference(string s) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        unordered_map<int,int> mpp;
        for(char c:s) mpp[c]++;
        for(auto it:mpp){
            if(it.second%2==0) mini=min(mini,it.second);
            else maxi=max(maxi,it.second);
        }
        return maxi-mini;
    }
};