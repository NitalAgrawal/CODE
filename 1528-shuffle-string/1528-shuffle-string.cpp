class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string ans(n, ' ');

        for(int i = 0; i < indices.size(); i++) {
            int j = indices[i];
            char m = s[i];

            ans[j] = m;
        }

        return ans;
    }
};