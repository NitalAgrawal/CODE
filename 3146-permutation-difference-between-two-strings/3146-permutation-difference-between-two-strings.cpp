class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int count = 0;
        int i=0,j=0;
        while(i<s.length() ){
            int j = t.find(s[i]);
        int  num = abs(i-j);
        count += num;
        i++;
   }
        return count;
    }
};