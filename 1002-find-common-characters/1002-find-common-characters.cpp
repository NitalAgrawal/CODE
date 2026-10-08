class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> mp;
        int n = words.size();

        // First word ki frequency
        for(char c : words[0]) {
            mp[c]++;
        }

        // Baaki words ke saath minimum frequency nikalna
        for(int i = 1; i < n; i++) {
            unordered_map<char, int> temp;

            for(char c : words[i]) {
                temp[c]++;
            }

            for(auto it = mp.begin(); it != mp.end(); ) {
                if(temp.find(it->first) == temp.end()) {
                    it = mp.erase(it);
                }
                else {
                    it->second = min(it->second, temp[it->first]);
                    it++;
                }
            }
        }

        vector<string> ans;

        for(auto it : mp) {
            for(int i = 0; i < it.second; i++) {
                ans.push_back(string(1, it.first));
            }
        }

        return ans;
    }
};