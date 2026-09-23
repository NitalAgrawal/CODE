class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count =0;
        for(int i=0;i<words.size();i++){
            reverse(words[i].begin(),words[i].end());
            for(int j=i+1;j<words.size();j++){
                if(words[i] == words[j]){
                    count++;
                }
            }

        }
        return count;
    }
};