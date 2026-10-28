class Solution {
public:
    int secondHighest(string s) {
        int max=-1;
        int seclar =-1;

        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                int num = s[i] - '0' ;
                if(num > max){
                    seclar = max;
                    max = num;
                }
                if(num>seclar && num<max){
                    seclar = num;
                }
            }
        }
        return seclar;
    }
};