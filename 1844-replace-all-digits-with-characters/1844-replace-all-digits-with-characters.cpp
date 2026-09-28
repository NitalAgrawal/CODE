class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                int num = s[i]-'0';
                s[i] = s[i-1]+num;
            }
        }
        return s;
    }
};