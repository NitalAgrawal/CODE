class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        bool bl = false;
        int targ =0;
        for(int i=0;i<targetWord.length();i++){
          targ = targ*10 + (targetWord[i]-'a');

        }
        int firs =0;
        for(int i=0;i<firstWord.length();i++){
          firs = firs*10 + (firstWord[i]-'a');

        }
        int seco =0;
        for(int i=0;i<secondWord.length();i++){
          seco = seco*10 + (secondWord[i]-'a');

        }
int sum = firs + seco;
 if(sum == targ){
    bl= true;
 }
 return bl;
    }
};