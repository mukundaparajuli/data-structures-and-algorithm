// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=0;
        int e=n-1;
        int ans=n;
        while(s<=e){
            int mid=(e-s)/2+s;
            if(isBadVersion(mid)){
                e=mid-1;
                ans=mid;
            } 
            if(!isBadVersion(mid)){
                s=mid+1;
            }
        }
        return ans;
    }
};