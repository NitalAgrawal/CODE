
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int minSum = INT_MAX;

        while (left < nums.size()) {
            right = left;
            sum = 0;

            while (right < nums.size() && right - left + 1 <= r) {
                sum += nums[right];

                int len = right - left + 1;

                if (len >= l && sum > 0) {
                    minSum = min(minSum, sum);
                }

                right++;
            }

            left++;
        }

        return minSum == INT_MAX ? -1 : minSum;
    }
};
