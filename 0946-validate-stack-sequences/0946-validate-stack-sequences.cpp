class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int r=0;
        stack<int> m;

        for(int i=0;i<pushed.size();i++){
            m.push(pushed[i]);
            if(!m.empty() && popped[r] == m.top() && r<popped.size()){
               while(!m.empty() && popped[r] == m.top()){
                     m.pop();
                     r++;
                }
               
            }
                
            
           
            
        }
        if(m.empty()){
            return true;
        }
        
            return false;
        
    }
};