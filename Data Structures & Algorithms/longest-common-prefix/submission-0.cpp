class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[strs.size()-1];
        int len=min(first.size(),last.size());
        int i=0;
        string ans="";
        while(i<len && first[i]==last[i]){
            ans+=first[i];
            i++;
        }
        return ans;
    }
};