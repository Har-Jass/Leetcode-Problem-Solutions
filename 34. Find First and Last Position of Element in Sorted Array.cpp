class Solution {
public:
    int lastOccurrence(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid;
        int ans2 = -1;
        while(start <= end) {
            mid = (start + end) / 2;
            if(target == nums[mid]) {
                ans2 = mid;
                start = mid + 1;
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
        return ans2;
    }

    int firstOccurrence(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid;
        int ans1 = -1;
        while(start <= end) {
            mid = (start + end) / 2;
            if(target == nums[mid]) {
                ans1 = mid;
                end = mid - 1;
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
        return ans1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPos = firstOccurrence(nums, target);
        int lastPos = lastOccurrence(nums, target);
        vector<int> ans;
        ans.push_back(firstPos);
        ans.push_back(lastPos);
        return ans;
    }
};