class Solution {
public:
    int minimumFlips(int n) {
        int count =0;
        string s="";
        while(n>0){
          s += n%2;
          n=n/2;
        }

        string m = s;
        reverse(s.begin(),s.end());

        for(int i=0;i<s.length();i++){
            if(s[i] != m[i]){
                count++;
            }
        }
        return count;
    }
};