class Solution {
public:
    string greatestLetter(string s) {
        int ans = INT_MIN;
        string a="";
        for(int i=0;i<s.length();i++){
             if(islower(s[i])){
                char ch = s[i];
                if(s.find(toupper(ch)) != string::npos){
                    int val = ch-'0';
                    if(val>ans){
                        ans  = val;
                        a = toupper(ch);
                    }
                }
             }
        }
        return a;
    }
};