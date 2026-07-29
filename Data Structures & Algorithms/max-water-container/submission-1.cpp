class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int l=0;
        int r=heights.size()-1;
        while(l<r){
            int width=min(heights[l],heights[r]);
            int length=r-l;
            int area=width*length;
            ans=max(ans,area);
            if(heights[l]<heights[r]) l++;
            else r--;
        }
        return ans;
    }
};
