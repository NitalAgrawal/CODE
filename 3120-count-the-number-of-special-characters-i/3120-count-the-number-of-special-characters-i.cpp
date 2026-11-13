class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> s;

        for(int i=0;i<word.length();i++){
            char ch = word[i];


           if(islower(ch)){
             char c = toupper(ch);
             if(word.find(c) != string::npos){
                s.insert(ch);
             }
           }


        }
        int sz = s.size();
        return sz;
    }
};