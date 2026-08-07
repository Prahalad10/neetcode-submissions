class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(st.find(n)==st.end()){
            st.insert(n);
            n=func(n);
            if(n==1) return true;
        }
        return false;
    }
    int func(int n){
        int sum=0;
        while(n>0){
            int dig=n%10;
            dig=dig*dig;
            sum+=dig;
            n/=10;
        }
        return sum;
    }
};
