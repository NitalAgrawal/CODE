class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>m;
        m.push(s[0]);
        for(int i=1;i<s.length();i++){
             if(!m.empty() && s[i] == m.top()){
                m.pop();
             }
             else{
                m.push(s[i]);
             }

        }
       string ans;

        while(!m.empty()) {
            ans += m.top();
            m.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};