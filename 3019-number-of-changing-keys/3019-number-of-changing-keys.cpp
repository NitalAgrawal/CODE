class Solution {
public:
    int countKeyChanges(string s) {
       

for(char &c : s) {
    c = tolower(c);
}
        int count=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                continue;
            }
            else{
                count++;
            }
        }
        return count;
    }
};