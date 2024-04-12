class Solution {
public:
    bool isPossible(vector<int>& piles,int h, int mid) {
        long long total = 0;
        for (int i = 0; i < piles.size(); i++) {
            total += ceil((double) piles[i] /(double) mid ); 
        }
        return total<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int s = 1;
        int e = piles[piles.size() - 1];
        int ans = -1;
        while (s <= e) {
        int mid = (e - s) / 2 + s;
            
            if (isPossible(piles, h, mid)) {
                e=mid-1;
            } else {
               s=mid+1;
            }
        }
        return s;
    }
};