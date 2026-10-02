class Solution {
public:
    int maxDifference(string s) {
        
        unordered_map<char,int>mp;

        for(int i=0;i<s.length();i++){
          mp[s[i]]++;
        }


        int odd1 =INT_MIN;
        int even1 = INT_MAX;

        for(auto it:mp){
            if(it.second % 2 !=0){
                odd1 = max(odd1,it.second);
              
            }
            else{
                  even1 = min(even1,it.second);
            }
        }
return odd1-even1;
    }
};