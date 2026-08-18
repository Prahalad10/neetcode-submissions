class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int ans=0;
        while(l<=r){
            if(people[r]==limit){
                ans++;
                r--;
                continue;
            }
            int sum=0;
            int count=0;
            sum+=people[r];
            r--;
            count++;
            if(l<=r && sum+people[l]<=limit && count<2){
                sum+=people[l];
                l++;
                count++;
            }
            ans++;
        }
        return ans;
    }
};