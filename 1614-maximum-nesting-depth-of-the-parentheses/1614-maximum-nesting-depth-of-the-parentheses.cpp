class Solution {
public:
    int maxDepth(string s) {
        int ans=INT_MIN;

        int count=0;
        for(int i=0;i<s.length();i++){
           ans=max(ans,count);
            if(s[i]=='('){
                count++;
                
            }
            else if(s[i]==')'){
                count--;
            }


        }
        return ans;
    }
};