class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
            int mid = (e - s) / 2 + s;
        while (s < e) {
            if (nums[mid] < nums[e]) {
                e = mid;
            } else {
                s = mid + 1;
            }
            mid = (e - s) / 2 + s;
        }
        return nums[s];
    }
};