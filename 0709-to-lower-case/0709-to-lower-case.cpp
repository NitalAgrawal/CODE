class Solution {
public:
    string toLowerCase(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            int num = s[i];
            if(num>=65 && num<=90){
              ans += num+32;
           }

           else{
            ans+=s[i];
           }
               
            

        }
        return ans;
    }
};