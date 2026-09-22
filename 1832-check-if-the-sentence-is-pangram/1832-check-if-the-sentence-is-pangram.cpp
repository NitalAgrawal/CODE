class Solution {
public:
    bool checkIfPangram(string sentence) {
        char mp[26] = {0};
        for(int i=0;i<sentence.length();i++){
            int num = sentence[i]-'a' ;
            mp[num] = 1; 
        }

        for(int i=0;i<26;i++){
            if(mp[i] == 0){
                return false;
                break;
            }
        }
        return true;
    }
};