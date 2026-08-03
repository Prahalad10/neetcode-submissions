class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int len) {
        if(hand.size()%len!=0) return false;
        unordered_map<int,int> mpp;
        for(int num:hand) mpp[num]++;
        sort(hand.begin(),hand.end());
        for(int num:hand){
            if(mpp[num]>0){
                for(int i=num;i<num+len;i++){
                    if(mpp[i]==0) return false;
                    mpp[i]--;
                }
            }
        }
        return true;
    }
};
