class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=0;
        int r=s.length();
vector<int> ans;
for(int i=0;i<s.length();i++){
          
            if(s[i]=='I'){
                ans.push_back(l);
                l++;
            }
            else{
                ans.push_back(r);
                r--;
            }
        
}
if(l==r){
    ans.push_back(l);
}
    while(l<r){
        ans.push_back(l);
        l++;
    }

       
        return ans;
    }
};