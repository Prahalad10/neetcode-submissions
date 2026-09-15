class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int sum=0;
        int l=0;
        int r=0;
        int ans=0;
        while(r<k){
            sum+=arr[r];
            r++;
        }
        int avg=sum/r;
        if(avg>=t) ans++;
        while(r<arr.size()){
            sum-=arr[l];
            l++;
            sum+=arr[r];
            r++;
            avg=sum/k;
            if(avg>=t) ans++;
        }
        return ans;
    }
};