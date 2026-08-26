class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool present[26] = {};

        for(char c : allowed) {
            present[c - 'a'] = true;
        }

        int count = 0;

        for(string word : words) {
            bool consistent = true;

            for(char c : word) {
                if(!present[c - 'a']) {
                    consistent = false;
                    break;
                }
            }

            if(consistent) {
                count++;
            }
        }

        return count;
    }
};