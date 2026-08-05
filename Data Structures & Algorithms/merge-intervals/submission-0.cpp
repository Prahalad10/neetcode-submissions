class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        map<int,int> mpp;
        for(auto& interval:intervals){
            mpp[interval[0]]++;
            mpp[interval[1]]--;
        }
        vector<vector<int>> ans;
        vector<int> temp;
        int sum=0;
        for(auto it:mpp){
            if(temp.empty()) temp.push_back(it.first);
            sum+=it.second;
            if(sum==0){
                temp.push_back(it.first);
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};
