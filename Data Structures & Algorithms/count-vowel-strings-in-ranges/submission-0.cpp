class Solution {
public:
    bool vowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_map<int,int> mpp;
        int i=0;
        for(string s:words){
            int n=s.size();
            if(vowel(s[0]) && vowel(s[n-1])){
                mpp[i]++;
            } 
            i++;
        }
        vector<int> ans;
        for(auto it:queries){
            int l=it[0];
            int r=it[1];
            int count=0;
            for(int i=l;i<=r;i++){
                if(mpp.count(i)) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};