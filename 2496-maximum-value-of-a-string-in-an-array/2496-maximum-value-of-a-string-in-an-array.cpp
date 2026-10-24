
class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans = 0;

        for (int i = 0; i < strs.size(); i++) {
            bool numeric = true;

            for (char ch : strs[i]) {
                if (!isdigit(ch)) {
                    numeric = false;
                    break;
                }
            }

            int val;

            if (numeric) {
                val = stoi(strs[i]);
            } else {
                val = strs[i].length();
            }

            ans = max(ans, val);
        }

        return ans;
    }
};
