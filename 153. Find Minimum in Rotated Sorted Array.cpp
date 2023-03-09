class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) {
            return nums[0];
        }
        int start = 0, end = nums.size() - 1, mid;
        if(nums[start] < nums[end]) {
            return nums[start];
        }
        while(start <= end) {
            mid = start + (end - start) / 2;
            if(mid + 1 < nums.size() && nums[mid] > nums[mid + 1]) {
                return nums[mid + 1];
            }
            if(mid - 1 >= 0 && nums[mid - 1] > nums[mid]) {
                return nums[mid];
            }
            if(nums[start] < nums[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
    }
};