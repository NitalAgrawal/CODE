class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count =0;
        for(int i=left;i<=right;i++){
            string s= words[i];
            char c1 = s[0];
            char c2 = s[s.length()-1];

            if((c1=='a' || c1=='e' || c1=='i' || c1=='o' || c1=='u') && (c2=='a' || c2=='e' || c2=='i' || c2=='o' || c2=='u')){
                count++;
            }
        }
        return count;
    }
};