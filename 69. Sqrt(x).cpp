class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        long long mid = start + (end - start) / 2;
        int ans;
        int target = x;
        while(start <= end) {
            if(mid * mid == target) {
                return mid;
            }
            if(mid * mid > target) {
                end = mid - 1;
            }
            else {
                ans = mid;
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
};