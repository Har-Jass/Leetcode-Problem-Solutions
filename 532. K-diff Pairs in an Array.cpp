class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // int count = 0;
        // for(int i = 0; i < nums.size(); i++) {
        //     for(int j = i + 1; j < nums.size(); j++) {
        //         if(abs(nums[i] - nums[j]) == k) {
        //             count++;
        //         }
        //     }
        // }
        // return count;
        sort(nums.begin(), nums.end());
        set<pair<int, int>> st;
        int i = 0, j = 1, count = 0;
        while(j < nums.size()) {
            if(nums[j] - nums[i] == k) {
                st.insert({nums[i], nums[j]});
                i++;
                j++;
            }
            else if(nums[j] - nums[i] > k) {
                i++;
            }
            else {
                j++;
            }
            if(i == j) {
                j++;
            }
        }
        return st.size();
    }
};