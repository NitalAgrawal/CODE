class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        int maxconst =0;
        int maxfreq=0;
         for(auto it:mp){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first =='o'|| it.first == 'u' ){
                maxfreq = max(maxfreq,it.second);
            }
            else{
                maxconst = max(maxconst,it.second);
            }
         }
         return maxconst+maxfreq;
    }
};