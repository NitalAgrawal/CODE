class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>m;
        
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] !="+"&& tokens[i] !="-"&& tokens[i] != "*"&& tokens[i] != "/"){
                m.push(tokens[i]);
            }
            else{
                int num1 = stoi(m.top());
                m.pop();
                int num2 = stoi(m.top());
                m.pop();
                if(tokens[i] == "+"){
                  int num = num2+num1;
                  m.push(to_string(num));
                }
                else if(tokens[i] == "-"){
                 int num = num2-num1;
                  m.push(to_string(num));
                }
                else if(tokens[i] == "*"){
                  int num = num2*num1;
                  m.push(to_string(num));
                }
                else {
                  int num = num2/num1;
                  m.push(to_string(num));
                }
            }
        }
       int ans = stoi(m.top());
       return ans;
    }
};