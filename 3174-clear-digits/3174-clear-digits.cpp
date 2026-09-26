class Solution {
public:
    string clearDigits(string s) {
        string m;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                m.pop_back();
            }
            else{
                m.push_back(s[i]);
            }
        }
        return m;
    }
};