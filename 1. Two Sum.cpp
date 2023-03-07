class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int i, j, flag = 0;
        for(i = 0; i < nums.size(); i++) {
            for(j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) {
                break;
            }
        }
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
};