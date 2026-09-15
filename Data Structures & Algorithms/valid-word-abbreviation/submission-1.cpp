class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int l=0;
        int r=0;
        while(r<abbr.size()){
            if(isdigit(abbr[r])){
                if(abbr[r]=='0') return false;
                int num=0;
                while(r<abbr.size() && isdigit(abbr[r])){
                    num=num*10+(abbr[r]-'0');
                    r++;
                }
                l+=num;
                if(l>word.size()) return false;

            }else{
                if(l>=word.size() || word[l]!=abbr[r]) return false;
                l++;
                r++;
            }
        }
        return l==word.size();
    }
};