class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        int ans=1;
        unordered_map<char,int> mpp;
        mpp[s[0]]=0;
        int l=0;
        int r=1;
        while(r<s.size()){
            if(mpp.count(s[r])){
                l=max(mpp[s[r]]+1,l);
            }
            int len=r-l+1;
            mpp[s[r]]=r;
            ans=max(ans,len);
            r++;
        }
        return ans;
    }
};
