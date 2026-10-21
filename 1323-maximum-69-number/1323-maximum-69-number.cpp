class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
          int count = 0;
          string ans = "";
        for(int i =0;i<s.length();i++){
            if(s[i]=='6'){
                count++;
            }
            if(s[i]=='6' && count == 1){
                ans += '9';
            }
            else{
                ans+=s[i];
            }
        }
        int n = stoi(ans);
        return n ;
    }
};