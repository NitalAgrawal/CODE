class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int count = 0;
        int i=0;
        while(i<s.length() ){
            int j = t.find(s[i]);
         count += abs(i-j);
        i++;
   }
        return count;
    }
};