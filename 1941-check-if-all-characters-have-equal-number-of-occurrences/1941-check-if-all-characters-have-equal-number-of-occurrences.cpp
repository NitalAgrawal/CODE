class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
int count = mp.begin()->second;

        for(auto it:mp){
            if(it.second == count){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};