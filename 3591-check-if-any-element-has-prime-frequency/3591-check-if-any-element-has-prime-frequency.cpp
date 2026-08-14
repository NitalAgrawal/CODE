class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for(auto it : mp) {
            int no = it.second;
            int cnt = 0;

            if(no < 2) {
                continue;
            }

            for(int i = 2; i * i <= no; i++) {
                if(no % i == 0) {
                    cnt++;
                    break;
                }
            }

            if(cnt == 0) {
                count++;
            }
        }

        bool bl = false;

        if(count >= 1) {
            bl = true;
        }

        return bl;
    }
};