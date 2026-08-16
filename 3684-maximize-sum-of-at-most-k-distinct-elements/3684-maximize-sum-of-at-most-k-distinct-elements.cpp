class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count =0;
        vector<int> ans;
        int i=nums.size()-1;
        ans.push_back(nums[i]);
        i--;
        while(count<k-1 && i>=0){
             
             if(nums[i] != ans.back()){
                  ans.push_back(nums[i]);
                   count++;
             }

              i--;
        }
        return ans;
        
    }
};