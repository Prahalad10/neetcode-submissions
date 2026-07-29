class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mpp;
        for(char c:s1) mpp[c]++;
        int n=s1.size();
        for(int i=0;i<s2.size();i++){
            unordered_map<char,int> temp;
            int sizew=0;
            int ind=i;
            while(sizew<n && ind<s2.size()){
                temp[s2[ind]]++;
                sizew++;
                ind++;
            }
            bool valid=true;
            for(char c='a';c<='z';c++){
                if(mpp[c]!=temp[c]){
                    valid=false;
                    break;
                }
            }
            if(valid) return true;
        }
        return false;
    }
};
