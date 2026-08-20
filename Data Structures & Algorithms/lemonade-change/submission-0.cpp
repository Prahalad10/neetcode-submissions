class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(int num:bills){
            if(num==5) five++;
            else if(num==10){
                if(five>=1){
                    five--;
                    ten++;
                }else return false;
            }else{
                if(five>=3){
                    five-=3;
                }else if(ten>=1 && five>=1){
                    ten--;
                    five--;
                }else return false;
            }
        }
        return true;
    }
};