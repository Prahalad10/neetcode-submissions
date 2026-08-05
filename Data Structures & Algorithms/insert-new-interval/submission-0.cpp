class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& num) {
        int n=intervals.size();
        int i=0;
        vector<vector<int>> ans;
        while(i<n && intervals[i][1]<num[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<n && num[1]>=intervals[i][0]){
            num[0]=min(num[0],intervals[i][0]);
            num[1]=max(num[1],intervals[i][1]);
            i++;
        }
        ans.push_back(num);
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};
