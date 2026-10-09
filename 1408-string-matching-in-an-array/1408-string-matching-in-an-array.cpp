class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;

        for(int i=0;i<words.size();i++){
            string s= words[i];
            for(int j=0;j<words.size();j++){
                if(j == i){
                    continue;
                }
                string m = words[j];
               if(m.find(s) != string::npos){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
};