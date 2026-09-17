class Solution {
public:
    string interpret(string command) {
        string ans ="";
        for(int i=0;i<command.length();i++){
            if(command[i]== 'G' ||command[i]== 'a' ||command[i]== 'l'){
                ans+=command[i];
            }
            else if(command[i]== '(' && command[i+1]== ')'){
                ans+='o';
                i++;
            }
            else{
                continue;
            }
        }
        return ans ;
    }
};