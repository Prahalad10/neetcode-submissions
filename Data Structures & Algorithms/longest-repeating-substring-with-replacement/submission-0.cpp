class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans=0;
        int l=0;
        int r=0;
        int maxi=INT_MIN;
        unordered_map<char,int> mpp;
        while(r<s.size()){
            mpp[s[r]]++;
            maxi=max(maxi,mpp[s[r]]);
            if((r-l+1)-maxi>k){
                mpp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
