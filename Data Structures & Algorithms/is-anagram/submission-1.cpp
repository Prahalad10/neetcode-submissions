class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        for(char c:s) mpp1[c]++;
        for(char c:t) mpp2[c]++;
        for(char c:s){
            if(mpp1[c]!=mpp2[c]) return false;
        }
        return true;
    }
};
