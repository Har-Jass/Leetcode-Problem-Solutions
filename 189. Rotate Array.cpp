class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        flip(nums, 0, n - k - 1);
        flip(nums, n - k, n - 1);
        flip(nums, 0, n - 1);
    }
    void flip(vector<int>& nums, int s, int e)
    {
        while(s < e)
        {
            swap(nums[s], nums[e]);
            s++;
            e--;
        }
    }
};