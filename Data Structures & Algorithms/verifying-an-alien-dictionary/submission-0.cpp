class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mpp;
        for(int i=0;i<order.size();i++){
            mpp[order[i]]=i;
        }
        for(int i=1;i<words.size();i++){
            string a=words[i-1];
            string b=words[i];
            int j=0;
            while(j<a.size() && j<b.size() && a[j]==b[j]) j++;
            if(j==b.size() && j<a.size()) return false;
            if(j<a.size() && j<b.size() && mpp[a[j]]>mpp[b[j]]) return false;
        }
        return true;
    }
};