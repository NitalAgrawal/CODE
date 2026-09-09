class Solution {
public:
    bool isAnagram(string s, string t) {
        

        unordered_map<char,int>n;
       

        for(int i=0;i<s.length();i++){
            n[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            n[t[i]]--;
        }
                      
        for(auto it:n){
                if(it.second == 0){
                    continue;
                }
                else{
                    return false;
                }

        }
        return true;
    }
};