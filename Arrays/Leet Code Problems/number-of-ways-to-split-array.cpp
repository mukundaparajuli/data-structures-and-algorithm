class Solution {
public:
    long long int totalSum(vector<int>& nums) {
        long long int total = 0;
        for (int n : nums) {
            total += n;
        }
        return total;
    }
    int waysToSplitArray(vector<int>& nums) {
        long long int leftSum = nums[0];
        long long int tot = totalSum(nums);
        int count = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (leftSum >= tot - leftSum) {
                count++;
                leftSum+=nums[i];
            }else
                leftSum += nums[i];
        }
        return count;
    }
};