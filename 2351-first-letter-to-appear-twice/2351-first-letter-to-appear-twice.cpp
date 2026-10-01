class Solution {
public:
    char repeatedCharacter(string s) {
        char ans;
        int freq[26]={0};
        for(int i=0;i<s.length();i++){
            int j = s[i]-'a';
            freq[j]++;
            if(freq[j] == 2){
                ans = s[i];
                break;
            }
        }
        return ans;
    }
};