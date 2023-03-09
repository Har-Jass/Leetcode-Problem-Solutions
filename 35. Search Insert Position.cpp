class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int mid, flag = 0;
        while(start <= end) {
            mid = start + (end - start) / 2;
            if(target == nums[mid]) {
                flag = 1;
                break;
            }
            else {
                if(target < nums[mid]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }
        }
        if(flag == 1) {
            return mid;
        }
        else {
            if(target < nums[0]) {
                return 0;
            }
            else if(target > nums[nums.size() - 1]) {
                return nums.size();
            }
            for(int i = 0; i < nums.size(); i++) {
                for(int j = i + 1; j < nums.size(); j++) {
                    if(nums[i] < target && nums[j] > target) {
                        return j;
                    }
                }
            }
        }
        return -1;
    }
};