class Solution {
public:
    string removeStars(string s) {
        stack<char>m;
        for(int i=0;i<s.length();i++){
            if(s[i]!='*'){
               m.push(s[i]);
            }
            else{
                if(!m.empty()){
                    m.pop();
                }
            }
        }
        string ans="";
        while(!m.empty()){
            ans += m.top();
            m.pop();
        }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};