/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        map<int,int> mpp;
        for(auto it:intervals){
            mpp[it.start]++;
            mpp[it.end]--;
        }
        int ans=0;
        int count=0;
        for(auto it:mpp){
            count+=it.second;
            ans=max(ans,count);            
        }
        return ans;
    }
};
