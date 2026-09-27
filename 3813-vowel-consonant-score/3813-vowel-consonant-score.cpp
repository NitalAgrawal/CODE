class Solution {
public:
    int vowelConsonantScore(string s) {
        int c=0;
        int v=0;
        for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
           v++;
        }
        else if(isalpha(s[i])){
            c++;
        }
        else{
            continue;
        }
        }
        if(c==0 || v==0){
            return 0;
        }
        int ans = floor(v/c);
        return ans;
    }
};