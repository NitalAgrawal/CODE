class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int len =-1;
        int ans = INT_MIN;
    for(int i=0;i<s.length();i++){
      for(int j=i+1;j<s.length();j++){
        if(s[i] == s[j]){
          len = j-i-1;
              }
            }
            ans = max(ans,len);
        }
        return ans;
    }
};