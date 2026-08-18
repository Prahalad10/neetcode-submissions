class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len=m+n;
        int k=0;
        for(int i=m;i<len;i++){
            nums1[i]=nums2[k];
            k++;
        }
        sort(nums1.begin(),nums1.end());
    }
};