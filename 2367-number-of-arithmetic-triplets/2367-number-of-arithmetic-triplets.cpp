class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {

                if ((nums[l] - nums[i] == diff) &&
                    (nums[r] - nums[l] == diff)) {
                    count++;
                    l++;
                    r--;
                }
                else if (nums[l] - nums[i] < diff) {
                    l++;
                }
                else {
                    r--;
                }
            }
        }

        return count;
    }
};