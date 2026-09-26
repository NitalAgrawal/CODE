class Solution {
public:
    bool isBalanced(string num) {
        int even =0;
        int odd=0;
        int i=0,j=1;
        if(num.length()<1){
            return false;
        }
        while(i<num.length() && j<num.length()){
            even += num[i]-'0';
            i=i+2;
            odd += num[j]-'0';
            j=j+2;
        }

        while(i<num.length()){
            even += num[i]-'0';
            i=i+2;
        }
        while(j<num.length()){
            odd += num[j]-'0';
            j=j+2;
        }

        if(even != odd){
            return false;
        }
        return true;
    }
};