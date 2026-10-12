class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++){
            
            int mini = INT_MAX;
            int idx = -1;
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]<mini){
                   mini = matrix[i][j];
                   idx =j;
                }
            
            }
    bool lucky=true;
            for(int r = 0;r<matrix.size();r++){
               if(matrix[r][idx] > mini){
               lucky = false;
             break;
          }
                
            }
            if(lucky){
                ans.push_back(mini);
            }
        }
        return ans;
    }
};