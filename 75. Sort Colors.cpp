class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int zero = 0, one = 0, two = 0;
        // int n = nums.size();
        // for(int i = 0; i < n; i++) {
        //     if(nums[i] == 0) {
        //         zero++;
        //     }
        //     else if(nums[i] == 1) {
        //         one++;
        //     }
        //     else if(nums[i] == 2) {
        //         two++;
        //     }
        // }
        // for(int i = 0; i < zero; i++) {
        //     nums[i] = 0;
        // }
        // for(int i = zero; i < zero + one; i++) {
        //     nums[i] = 1;
        // }
        // for(int i = zero + one; i < zero + one + two; i++) {
        //     nums[i] = 2;
        // }
        int n = nums.size();
        int low = 0, medium = 0, high = n - 1;
        while(medium <= high) {
            if(nums[medium] == 0) {
                swap(nums[low], nums[medium]);
                low++;
                medium++;
            }
            else if(nums[medium] == 1) {
                medium++;
            }
            else {
                swap(nums[medium], nums[high]);
                high--;
            }
        }
    }
};