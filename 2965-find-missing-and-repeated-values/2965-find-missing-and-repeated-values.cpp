class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> nums;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                nums.push_back(grid[i][j]);
            }
        }

        sort(nums.begin(),nums.end());

        vector<int> ans;
        for(int i=0;i<(n*n)-1;i++){
            if(nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
            }
        }

        for(int i=1;i<=n*n;i++){
            if(find(nums.begin(),nums.end(),i)!= nums.end()){
                continue;
            }
            else{
                ans.push_back(i);
            }
        }
 return ans;
    }
};