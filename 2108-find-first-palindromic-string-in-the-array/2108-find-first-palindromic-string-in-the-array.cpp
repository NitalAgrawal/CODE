class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){

            string s = words[i];
            bool bl = true;
            int k=0;
            int j=s.length()-1;
            while(k<=j){
                if(s[k]==s[j]){
                    k++;
                    j--;
                }
                else{
                    bl = false;
                    break;
                }
            }
            if(bl){
               ans += s;
               break;
            }
        }
        return ans;
    }
};