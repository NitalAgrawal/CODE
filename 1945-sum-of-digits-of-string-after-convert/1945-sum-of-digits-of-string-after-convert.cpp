class Solution {
public:
    int getLucky(string s, int k) {
        string num="";
        for(int i=0;i<s.length();i++){
           num += to_string(s[i] - 'a' + 1);
        }
        


        while(k>0){
            int sum = 0;
         for(int i=0;i<num.length();i++){
           sum += (num[i]-'0');
           
        }
        num = to_string(sum);
        k--;
        }

        return stoi(num);
    }
};