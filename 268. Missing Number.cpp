class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalCount = (n * (n + 1)) / 2;
        int curCount = 0;
        for(int i = 0; i < n; i++) {
            curCount += nums[i];
        }
        int miss = totalCount - curCount;
        return miss;
    }
};